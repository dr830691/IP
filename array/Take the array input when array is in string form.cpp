#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
// solution comes here
string s;
getline(cin,s);

// cout<<found;
vector<int>nums1 ;
vector<int>nums2 ;
size_t found = s.find("nums1");
int i=found;
while(s[i]!=']')
{
        if(s[i]>='0' && s[i]<='9' && s[i-1]!='s')
           nums1.push_back(s[i]-'0');   
          i++;
}
 found =s.find("nums2");
 i=found;
while(s[i]!=']')
{
        if(s[i]>='0' && s[i]<='9' && s[i-1]!='s')
           nums2.push_back(s[i]-'0');   
          i++;
} 
return 0;
}

