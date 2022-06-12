#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int max_limit=0,curr=0;
     while(n--){
         int x,y;
         cin>>x>>y;
         curr = curr - x + y;
         max_limit = max(curr,max_limit);
     }
   cout<<max_limit<<endl;
   return 0;
}
