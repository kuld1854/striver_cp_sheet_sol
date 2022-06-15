#include <bits/stdc++.h>
using namespace std;
int main()
{   
    string str,ans="";
    cin>>str;
    int len = str.length();
    for(int i=0; i<len; i++){
         if(str[i]!='a' && str[i]!='o' && str[i]!='y' && str[i]!='e' &&str[i]!='u' &&str[i]!='i' && str[i]!='A' &&str[i]!='O' &&str[i]!='Y' &&str[i]!='E' && str[i]!='U' &&str[i]!='I' )
               {    if(str[i]>='A' && str[i]<='Z')
                             str[i]+= 'a'-'A';
                    ans+=".";
                    ans+=str[i];
                   
               }
       }
       cout<<ans<<endl;
      return 0;
    
}
