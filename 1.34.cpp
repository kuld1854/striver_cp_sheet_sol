#include <iostream>
using namespace std;
int main()
{
   int n,z,j;
   cin>>n;
   for(int i=0; i<2*n+1; i++){
        z = i;
       if(z>n)
          z = 2*n - i;
       for(j = z ; j<n; j++)
           cout<<"  ";
           
       for( j=0; j<z; j++)
           cout<<j<<" ";
          if(j==z)
              cout<<j;
        for( j=z-1; j>=0; j--)
           cout<<" "<<j;
           cout<<endl;
   }

    return 0;
}
