
#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n;
   cin>>n;
   int count = 0;
  
   int arr[18];
   while(n>9){
         arr[count] = min(n%10,9-(n%10));
           n/=10;
         count++;
          
        }
    if(n!=9)
           arr[count] = min(n%10,9-n%10);
        else
            arr[count] = 9;
      
      
     for(int i=count; i>=0; i--)
        cout<<arr[i];
        cout<<endl;
}
