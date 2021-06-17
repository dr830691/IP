//https://codeforces.com/problemset/problem/1133/C
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

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
int max_student=INT_MIN,j=0;
for(int i=0;i<n;i++)
{
           
           while(j<n && a[j]-a[i]<=5)
           { ++j;
           max_student=max(max_student,j-i);
           }
}
cout<<max_student;
return 0;
}

