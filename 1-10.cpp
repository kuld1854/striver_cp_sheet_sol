#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int arr[n];
     for(int i=0; i<n; i++)
         cin>>arr[i];
         int i=0;
     for( i=0; i<n; i++){
          if(arr[i]==1)
              break;
     }
     if(i!=n)
           cout<<"HARD"<<endl;
        else
          cout<<"EASY"<<endl;
}
