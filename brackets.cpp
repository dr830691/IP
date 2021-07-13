#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        st.push();
        if(s[i]==')'&& !st.empty())
        st.pop();
    }
    if(st.empty())
    {
        return 1;
    }
    else
    return 0;
}