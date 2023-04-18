//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    vector<int>temp;
	    unordered_map<int,int>m1;
	    for(int i=0;i<n;i++)
	    {
	        m1[arr[i]]++;
	    }
	    for(auto it:m1)
	    {
	        temp.push_back(it.first);
	    }
	    sort(temp.begin(),temp.end());
	    if(temp.size()<=1)
	    {
	        return -1;
	    }
	    return temp[temp.size()-2];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends