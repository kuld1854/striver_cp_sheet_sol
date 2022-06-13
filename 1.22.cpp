#include <bits/stdc++.h>
using namespace std;

int main()
{
   string x;
   string y[5];
   cin>>x;
   for(int i=0; i<5; i++)
        cin>>y[i];
        int i=0;
    for( i=0; i<5; i++){
         if(x[0] == y[i][0]  || x[1] == y[i][1])
              break;
    }
    if(i==5)
       cout<<"No\n";
      else 
         cout<<"Yes\n";
    return 0;
}
