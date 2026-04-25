// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void bubble(int arr[],int n){
    if(n==1){
        return ;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    bubble(arr,n-1);
}
int main() {
    int arr[]={13,46,24,52,20,9};
    int n=5;
    bubble(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   

    return 0;
}
