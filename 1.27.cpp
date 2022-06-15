#include <bits/stdc++.h>
using namespace std;
int main()
{   
   int t;
   cin>>t;
   while(t--){
       int n,m;
       cin>>n>>m;
       string str[n];
       for(int i=0; i<n; i++)
          cin>>str[i];
         
        int count = 0; 
      for(int i=0; i<n-1; i++){
            if(str[i][m-1]=='R')
                count++;  }
      for(int i=0; i<m-1; i++){
           if(str[n-1][i]=='D')
             count++;
      }
       cout<<count<<endl;  
   }
    return 0;
}
