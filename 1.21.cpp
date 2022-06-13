#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++)
     cin>>arr[i];
    int inc= 1 ,max_inc = 1;
 for(int i=1; i<n; i++){
     if(arr[i]>arr[i-1])
          inc++;
     else {
            max_inc = max(max_inc,inc);
            inc = 1;
     }
}
max_inc = max(max_inc,inc);
   cout<<max_inc<<endl;
   
    
    return 0;
}
