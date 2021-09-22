#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
          int data;
        TreeNode*right;
        TreeNode*left;
       TreeNode(int d){
          data=d;
          right=NULL;
          left=NULL;
      }
};

void preOrder(TreeNode* root)
{
    if(root==NULL)
    return ;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int findClosedindex(string s,int start,int last)

{   if(start>last)
      return-1;
           stack<char> st;
           int i;
           for( i=start;i<=last;i++)
           {
                      if(s[i]=='(')
                      st.push(s[i]);
                      else if(s[i]==')' && st.top()=='(')
                           st.pop();
                           
                   if(st.empty())
                      {return i;}
           
           }
           
           return -1;
           
}
TreeNode* makeTree(string s, int start,int last)
{
           if(start>last)
           return NULL;
           TreeNode* root=new TreeNode(s[start]-'0');
           int index=-1;
           if(start+1<=last && s[start+1]=='(')
            index=findClosedindex(s,start+1,last);
           
           if(index!=-1)
           {root->left=makeTree(s,start+2,index-1);
           root->right=makeTree(s,index+2,last-1);
           }
           
            return root;
           
}
int main(){
    string s;
    cin>>s;
    int start=0;
    int last=s.size()-1;
    TreeNode*root=makeTree(s,start,last);
    preOrder(root);
   
    return 0;
}

