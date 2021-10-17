// Link:-
// https://www.geeksforgeeks.org/sort-an-alphanumeric-string-such-that-the-positions-of-alphabets-and-numbers-remain-unchanged/


#include<bits/stdc++.h>
using namespace std;
string sortedString(string s){
    string temp=s;
    sort(temp.begin(),temp.end());
    cout<<s<<"\n";
    int digitCount=0;
    int i=0;
while(temp[i]<='9' && temp[i]>='0'){
    digitCount++;i++;
}
int charCount=digitCount;
digitCount=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]<='9' && s[i]>='0')
        {
            s[i]=temp[digitCount++];
        }
        else
        s[i]=temp[charCount++];
    }
    return s;
}

int main(){
    
    string s;
    
    cin>>s;
    cout<<sortedString(s);
    return 0;
}

