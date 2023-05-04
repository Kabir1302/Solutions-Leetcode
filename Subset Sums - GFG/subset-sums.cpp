//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void solve(vector<int>&arr,int n,int index,vector<int>&temp,vector<int>&res)
    {
        if(index>=n)
        {
            int sum=0;
            for(int i=0;i<temp.size();i++)
            {
                sum+=temp[i];
            }
            res.push_back(sum);
            
            return;
        }
        solve(arr,n,index+1,temp,res);
        int ele=arr[index];
        temp.push_back(ele);
        solve(arr,n,index+1,temp,res);
        temp.pop_back();
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>temp;
        vector<int>res;
        int index=0;
        solve(arr,N,index,temp,res);
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends