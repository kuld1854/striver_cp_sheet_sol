#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    cin>>n>>str;
    string ans = "";
    int pos = 0,count=0;
     while(pos<n){
           ans+= str[pos];
           count++;
           pos+=count;
     }
      
    cout<<ans<<endl;
    return 0;
}
