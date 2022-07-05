#include <iostream>
using namespace std;
int main()
{
   int x,y;
   cin>>x>>y;
   if(y%x!=0)
       {  cout<<"-1"<<endl;
          return 0;
       }
    x = y/x;
    y = 0;
    while(x != 1){
        if( x%6  != 0  && x%3 !=0 && x%2!=0){
              y= -1;
              break;
        }
                
        if(x>=6 && x%6 == 0){
               x/=6;
               y+=2;
        }
        if(x>=3 && x%3 == 0){
               x/=3;
               y+=1;
        }
         if(x>=2 && x%2 == 0){
               x/=2;
               y+=1;
        }
     }
    cout<<y<<endl;

    return 0;
}
