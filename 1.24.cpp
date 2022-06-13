#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
   int n;
   cin>>n;
   int ans= (( n%10)-1)*10;
    if(n/10 == 0)
        ans+=1;
      else  if(n/100 == 0)
        ans+=3;
      else   if(n/1000 == 0)
        ans+=6;
      else
          ans+=10;
      cout<<ans<<endl;
  }
    return 0;
}
