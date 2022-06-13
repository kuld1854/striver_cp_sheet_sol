#include <bits/stdc++.h>

using namespace std;
long long int fun(long long int a){
   long long int mini = 9 , maxi = 0;
      while(a>0){
           mini = min(mini,a%10);
           maxi = max(maxi,a%10);
           a/=10;
      }
      return mini*maxi;
}
int main()
{     
     int t;
      cin>>t;
     while(t--){
         long long int a,k,res;
            cin>>a>>k;
            while(k>1){
                res = fun(a);
                  if(!res)
                    break;
                   a+=res;
                k--;
            }
            cout<<a<<endl;
     }
      
    return 0;
}
