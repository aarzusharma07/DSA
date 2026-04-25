// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int quicksort(int a[],int lb, int ub){
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    while(start<end){
        while(pivot >=a[start] ){
            start++;
        }
        while(pivot<=a[end] ){
            end--;
        }
        if(start<end){
          swap(a[start],a[end]);
        }
        
    }
    swap(a[end],a[lb]);
    return end;
}
void sort(int a[],int lb,int ub){
    if(lb<ub){
        int loc=quicksort(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}
int main() {
    int arr[]={13,46,24,52,20,9};
    int n=6;
    sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   

    return 0;
}
