// problem Link -https://codeforces.com/contest/1339/problem/B//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<long long>
#define vi vector<int>
#define vb vector<bool>
#define pql priority_queue<long long>
#define pqp priority_queue<pair<ll,ll> >
using namespace std;

int main() {ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
// solution comes here
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];

for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
int b[n];
int l=0,r=n-1;
for(int i=n-1;i>=0;i--)
{ if(i%2==0)
 {b[i]=a[l];l++;}
 else
{b[i]=a[r];r--;}
}
for(int i=0;i<n;i++)
cout<<b[i]<<" ";
cout<<"\n";
}
return 0;
}

