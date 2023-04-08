//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int>freq;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int temp=k-arr[i];
            if(freq.count(temp))
            {
                cnt+=freq[temp];
            }
            freq[arr[i]]++;
        }
        return cnt;
        
        //in this soln we basically take freq of eACH ELEMENT OF array and further we check k-arr[i] if it is in freq map we add its freq in cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends