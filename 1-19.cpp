#include <bits/stdc++.h>
using namespace std;
int main()
{    string str;
     cin>>str;
     int count[3] = {0};
     int len= str.length();
     for(int i=0; i<len; i+=2)
         count[(str[i]-'0')-1]++;
      count[1] += count[0];
      count[2] += count[1];
 int j=0;
    string ans = "\0";
  for(int i=0; i<count[2]; i++)
     {  if(i<count[j])
             ans+= to_string(j+1)+"+";
         else
            { j++;
              i--;
            }
         
     }
      ans.erase(len);
     cout<<ans<<endl;
   return 0;
}
