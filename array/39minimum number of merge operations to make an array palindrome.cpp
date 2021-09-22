#include <iostream>
#include <vector>
using namespace std;
int min_merge_ops(int n,int a[])
{
           int first=0;
           int last=n-1;
           int count=0;
           while(first<last)
           {
                      if(a[first]<a[last])
                      {
                         a[first+1]=a[first] +a[first+1]; 
                         count++;
                         first++;
                      }
                      else if(a[first]>a[last])
                      {
                        a[last-1]=a[last-1] +a[last]; 
                         count++;
                         last--;
                      }
                      else
                      {
                                 first++;
                                 last--;
                      }
           }
           return count;
      }
int main(){
           int n;
           cin>>n;
           int a[n];
           for(int i=0;i<n;i++)
           cin>>a[i];
           cout<<min_merge_ops(n,a);
           return 0;
}
