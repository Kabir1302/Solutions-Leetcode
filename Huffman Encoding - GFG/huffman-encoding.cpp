//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

class cmp
{
    public:
    bool operator()(Node* a,Node* b)
    {
        return a->data > b->data;
    }
};

class Solution
{
	public:
	    void traverse(Node* root,vector<string>& res,string temp)
	    {
	        if(root->left==NULL && root->right==NULL)
	        {
	            res.push_back(temp);
	            return;
	        }
	        traverse(root->left,res,temp+'0');
	        traverse(root->right,res,temp+'1');
	    }
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    // Code here
		    priority_queue<Node*,vector<Node*>,cmp>pq;
		    for(int i=0;i<N;i++)
		    {
		        Node* temp=new Node(f[i]);
		        pq.push(temp);
		    }
		    
		    while(pq.size()>1)
		    {
		        Node* left=pq.top();
		        pq.pop();
		        
		        Node* right=pq.top();
		        pq.pop();
		        
		        Node* add=new Node(left->data + right->data);
		        add->left=left;
		        add->right=right;
		        pq.push(add);
		    }
		    Node* root=pq.top();
		    vector<string>res;
		    string temp="";
		    traverse(root,res,temp);
		    return res;
		}
};

// void traverse(Node* root,vector<string>& res,string temp)
// 	    {
// 	        if(root->left==NULL && root->right==NULL)
// 	        {
// 	            res.push_back(temp);
// 	            return;
// 	        }
// 	        traverse(root->left,res,temp+'0');
// 	        traverse(root->right,res,temp+'1');
// 	    }
// 		vector<string> huffmanCodes(string S,vector<int> f,int N)
// 		{
// 		    // Code here
// 		    priority_queue<Node*,vector<Node*>,cmp>q;
// 		    for(int i=0;i<N;i++)
// 		    {
// 		        Node* temp=new Node(f[i]);
// 		        q.push(temp);
// 		    }
		    
// 		    while(q.size()>1)
// 		    {
// 		        Node* left=q.top();
// 		        q.pop();
		        
// 		        Node* right=q.top();
// 		        q.pop();
		        
// 		        Node* newnode=new Node(left->data+right->data);
// 		        newnode->left=left;
// 		        newnode->right=right;
// 		        q.push(newnode);
// 		    }
// 		    Node* root=q.top();
// 		    vector<string>res;
// 		    string temp="";
// 		    traverse(root,res,temp);
// 		    return res;
		    
// 		}

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string S;
	    cin >> S;
	    int N = S.length();
	    vector<int> f(N);
	    for(int i=0;i<N;i++){
	        cin>>f[i];
	    }
	    Solution ob;
	    vector<string> ans = ob.huffmanCodes(S,f,N);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    }
	return 0;
}
// } Driver Code Ends