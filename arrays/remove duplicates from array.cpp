// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int a[]={1,2,3,1,4,7,4};
  int n=sizeof(a)/sizeof(a[0]);
 int key;
 for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
      if(a[i]==a[j]){
           key=j;
          
      
      for(int k=key;k<n;k++){
          a[k]=a[k+1];
       
      }
      n--;
  }}
 }
 for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
 }
    return 0;
}
