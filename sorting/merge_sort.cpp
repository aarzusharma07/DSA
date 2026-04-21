// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
void merge(int a[],int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
    if(a[left]>a[right]){
        temp.push_back(a[right]);
        right++;
    }else{
        temp.push_back(a[left]);
        left++;
    }
    }
    while(left <= mid){
        temp.push_back(a[left]);
        left++;
    }
     while(right <= high){
        temp.push_back(a[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        a[i]=temp[i-low];

    }
}
void mergesort(int a[],int low,int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    merge(a,low,mid,high);
}
int main() {
  int a[]={4,2,7,1,5,3};
  int n=5;
  mergesort(a,0,n);
 for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}
