// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
 
}
int main() {
    int n=5;
    int arr[]={2,5,9,7,8};
   selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
