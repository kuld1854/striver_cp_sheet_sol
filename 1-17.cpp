#include <bits/stdc++.h>
using namespace std;
int main()
{    string str;
     cin>>str;
    int len = str.length();
    int arr[26] = {0};
    for(int i=0; i<len; i++)
        arr[str[i]-'a'] = 1;
  int sum = 0;
     for(int i=0; i<26; i++)
         sum+=arr[i];
    if(sum%2!=0)
       cout<<"IGNORE HIM!"<<endl;
       else
         cout<<"CHAT WITH HER!"<<endl;
          
   return 0;
}
