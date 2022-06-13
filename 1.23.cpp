#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int i=1;
   int block = 1;
   while(block <=n){
        i++;
         block+= ((i)*(i+1))/2;
        
   }
     cout<<i-1<<endl;
    return 0;
}

