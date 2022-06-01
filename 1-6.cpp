 #include <iostream>
using namespace std;

int main()
{
   int t;
    cin>>t;
   while(t--){
        int n;
        cin>>n;
       int arr[5]= {0};
       int power  = 1;
        int count = 0;
       for(int i=4; i>=0; i--){
            if(n%10 !=0){
               arr[i] = (n%10)*power;
               count++;
               }
           n/=10;
           power*=10;
       }
        cout<<count<<endl;
      for(int i=0; i<5; i++)
         if(arr[i]!=0)
           cout<<arr[i]<<" ";
    cout<<endl;
   }
}
