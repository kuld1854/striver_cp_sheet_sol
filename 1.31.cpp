#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n; 
   int arr[7];
   for(int i=0; i<7; i++)
       cin>>arr[i];
  int sum  = 0;
   for(int i=0; i<7; i++)
       sum+=arr[i];
  if(n%sum != 0)
        n%=sum;
   else
        n = sum;
    int i=0;
  for( i=0; i<7; i++){
        if(arr[i]<n)
             n-=arr[i];
         else
              break;
     }
     cout<<i+1<<endl;
  return 0;
}
