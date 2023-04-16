//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        string res="";
        for(int i=s.size()-1;i>=0;i--)
        {
            string temp="";
            while(s[i]!='.' && i>=0)
            {
                temp+=s[i--];
            }
            reverse(temp.begin(),temp.end());
            res+=temp;
            
            if(i<0)
               break;
               
            else
               res+='.';
        }
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
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends