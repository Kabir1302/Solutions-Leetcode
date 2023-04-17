//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void leftRotate(int arr[], int n, int k) 
	{ 
	   // Your code goes here
	   
	   int temp[n];
	   for(int i=0;i<n;i++)
	   {
	       temp[i]=arr[i];
	       
	   }
	   int i=0,j=0;
	   
	   for(i=0;i<n-k;i++)
	   {
	       arr[i]=temp[i+k];
	       
	   }
	   while(j<k && i<n)
	   {
	       arr[i]=temp[j];
	       i++;
	       j++;
	   }
	} 
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}



// } Driver Code Ends