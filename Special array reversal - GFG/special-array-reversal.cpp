//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverse(string str)
    { 
        //code here.
        int n=str.length();
        int s=0,e=n-1;
        while(s<e)
        {
            if(isalpha(str[s]) && isalpha(str[e]))
            {
                swap(str[s],str[e]);
                s++;
                e--;
            }
            else if(!isalpha(str[s]))
            {
                s++;
            }
            else if(!isalpha(str[e]))
            {
                e--;
            }
            
        }
        return str;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    }
return 0;
}


// } Driver Code Ends