// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,2,3,4,5};
   int n=sizeof(arr)/sizeof(arr[0]);
   int temp[n];
   for(int i=1;i<n;i++){
       for(int j=i-1;j<n-1;j++){
           temp[j]=arr[i];
           
       }
          
   }
  temp[n-1]=arr[0];
for(int i=0;i<n;i++){
    cout<<temp[i]<<" ";
}
    return 0;
}
