// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   int n=5;
   int a[]={7,4,1,5,3};
   for(int i=0;i<n;i++){
      int key=i;
      int j=i-1;
      while(a[key]<a[j] && j>=0){
          int temp=a[key];
          a[key]=a[j];
          a[j]=temp;
          key--;
          j--;
      }
   }
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
    return 0;
}
