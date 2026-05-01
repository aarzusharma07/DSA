// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int arr[]={1,2,3,4,5,6,7};
int n =sizeof(arr)/sizeof(arr[0]);
int temp[n];
int k;
string input;
cin>>k;
cin>>input;
for(int z=1;z<=k;z++){
    if(input=="left"){
         int key1=arr[0];
        for(int i=1;i<n;i++ ){
            
                temp[i-1]=arr[i];
            
        }
        temp[n-1]=key1;
    }else{
        int key2=arr[n-1];
        for(int i=0;i<n-1;i++){
            
                temp[i+1]=arr[i];
            
        }
        temp[0]=key2;
    }
   for(int i=0;i<n;i++){
       arr[i]=temp[i];
   }
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}
