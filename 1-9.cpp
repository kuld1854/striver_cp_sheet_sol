#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int arr[n];
     for(int i=0; i<n; i++)
         cin>>arr[i];
    int mini  = INT_MAX,min_index,max_index;
    int maxi = 0;
   for(int i=0; i<n; i++){
       if(mini>=arr[i]){
            mini = arr[i];
            min_index = i;
       }
        if(maxi < arr[i]){
            maxi = arr[i];
            max_index = i;
            }
      }
    int ans = max_index + (n - min_index -1);
    if(max_index > min_index)
       ans-=1;
     cout<<ans<<endl;
    return 0;
}
