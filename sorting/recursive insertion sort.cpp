// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void insertion(int arr[],int n,int i){
    if(i==n){
        return ;
    }
    int j=i;

    while(j>0 && arr[j-1]>arr[j]){
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }
    insertion(arr,n,i+1);
}
int main() {
    int arr[]={13,46,24,52,20,9};
    int n=5;
    
    insertion(arr,n,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   

    return 0;
}
