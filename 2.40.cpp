#include <iostream>
using namespace std;
int main()
{  int t;
    cin>>t;
   while(t--){
       int a,k,t;
       cin>>a>>k;
          if(a>k){
             t = a - k;
              t = (t+k-1)/k;
              k+=t*k;
          }
      cout<<((k-1)/a)+1<<endl;
   }
   return 0;
}
