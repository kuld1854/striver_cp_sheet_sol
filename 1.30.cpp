#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            arr[i] = i+1;
     
        cout<<"2"<<endl;
    if(n==2){
          cout<<"1 2"<<endl;
          continue;
    }
        cout<<arr[n-3]<<" "<<arr[n-1]<<endl;
        arr[n-3] = (arr[n-1]+arr[n-3])/2;
        for(int i=n-2; i>0; i--){
            cout<<arr[i]<<" "<<arr[i-1]<<endl;
            arr[i-1] =(arr[i-1]+arr[i])/2;
        }
        
    }
      return 0;
    
}
