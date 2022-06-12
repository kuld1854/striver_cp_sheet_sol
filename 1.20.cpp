#include <bits/stdc++.h>
using namespace std;
int main()
{    int t;
    cin>>t;
    while(t--) {
    int a,b,n;
    cin>>a>>b>>n;
   int  count = 0;
    while(b<=n){
            if(b>a){
              int temp = b;
                b = a;
                a = temp;
           }
            b+=a;
            count++;
         }
        cout<<count<<endl;
   }
   return 0;
}
