#include <bits/stdc++.h>
using namespace std;

int binarySearch(int low,int high,int arr[])
{
          int mid=low+(high-low)/2;
          while(low<=high)
          {
               if(mid+1==arr[mid])
               return mid+1;
               else if(arr[mid]>mid+1)
               high-mid-1;
               else
               low=mid+1;
          }
          return -1;
}
void solve(){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      cin>>a[i];
     int ans=binarySearch(0,n-1,a);
     cout<<ans;
}
      
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
// solution comes here
int t;
cin>>t;
while(t--)
{ solve();
}
return 0;
}

