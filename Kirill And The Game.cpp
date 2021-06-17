// Kirill And The Game
#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
// solution comes here

long long l, r, x, y, k;
cin>> l >>r >>x>> y>> k;
 bool test=0;
for(long long i=x;i<=y;i++) 
{     
if( l<= i*k && i*k <=r)
{test =1;
break;
}
}
if(test)
cout<<"YES";
else
cout<<"NO";
return 0;
}

