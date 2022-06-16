#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n; 
  string str;
  cin>>str;
  int ch[26] = {0};
  int len = str.length();
  for(int i=0; i<len; i++)
       ch[str[i]-'a']++;
        int i;
  for( i=0; i<26; i++){
      if(ch[i]%n!=0)
          break;
    }
    if(i!=26)
      cout<<"-1"<<endl;
      else { 
              string ans= "",result="";
              char c;
               for(int i=0; i<26; i++){
                       while(ch[i]!=0){
                               c = 'a'+i;
                               ans+=c;
                               ch[i]-=n;
                         } }
                for(int i=0; i<n; i++)
                     result+=ans;
            cout<<result<<endl;
         }
           
    
  return 0;
}
