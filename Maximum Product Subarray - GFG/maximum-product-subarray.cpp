//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
#include<bits/stdc++.h>
class Solution{
public:

	// Function to find maximum product subarray
	long long max(long long a,long long b)
	{
	    if(a>b)
	    {
	        return a;
	    }
	    return b;
	}
	long long min(long long a,long long b)
	{
	    if(a<b)
	    {
	        return a;
	    }
	    return b;
	}
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	   // long long maxi=INT_MIN;
	   // long long pro=1;
	   // for(int i=0;i<n;i++)
	   // {
	   //     pro*=arr[i];
	   //     maxi=max(maxi,pro);
	   //     if(arr[i]==0)
	   //     {
	   //         pro=1;
	   //     }
	   // }
	   // pro=1;
	   // for(int i=n-1;i>=0;i--)
	   // {
	   //     pro*=arr[i];
	   //     maxi=max(maxi,pro);
	   //     if(arr[i]==0)
	   //     {
	   //         pro=1;
	   //     }
	   // }
	   // return maxi;
	   long long maxi=arr[0];
	   long long mini=arr[0];
	   long long res=arr[0];
	   if(arr.size()==0)
	   {
	       return 0;
	   }
	   for(int i=1;i<arr.size();i++)
	   
	   {
	       if(arr[i]<0)
	       {
	           swap(maxi,mini);
	       }
	       maxi=max(arr[i],arr[i]*maxi);
	       mini=min(arr[i],arr[i]*mini);
	       res=max(res,maxi);
	   }
	   return res;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends