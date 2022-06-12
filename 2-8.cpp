#include <iostream>
using namespace std;

int main()
{
    int t,sum = 0;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if(str[0]=='T')
            sum+=4;
        else  if(str[0]=='C')
                 sum+=6;
        else  if(str[0]=='O')
                 sum+=8;
        else    if(str[0]=='D')
                     sum+=12;
         else
                    sum+=20;
            
    }
      cout<<sum<<endl;
    return 0;
}
