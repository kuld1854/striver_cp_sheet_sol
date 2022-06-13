#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
      string str;
      cin>>str;
      int len = str.length();
      int start= -1;
      int stop = len;
     for(int i=0; i<len; i++){
           if(str[i] == '1'){
              start =  i;   
               break;
           }  }
    for(int i=len-1; i>=0; i--){
           if(str[i] == '1'){
              stop =  i;   
               break;
           }  }
    if(start == -1){
        cout<<"0"<<endl;
        continue;
    }
        int count = 0;
 for(int i=start; i<stop; i++)
      {  if(str[i]=='0')
          count++;  }
    cout<<count<<endl;
         
  }
    return 0;
}
