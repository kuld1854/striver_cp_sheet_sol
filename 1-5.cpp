#include <bits/stdc++.h>

using namespace std;

int main()
{     
     int a,b,c,ans;
     cin>>a>>b>>c;
     ans = min(abs(a-b)+abs(b-c),min(abs(b-c)+abs(c-a),abs(a-b)+abs(a-c)));
     cout<<ans<<endl;
      
    return 0;
}
