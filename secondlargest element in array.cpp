// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int a[]={2,5,1,3,0};
  int n=sizeof(a)/sizeof(a[0]);
  int largest=0;
  for(int i=0;i<n;i++){
      if(largest<a[i]){
          largest=a[i];
      }
  }
  int secondlargest=0;
  for(int i=0;i<n;i++){
      if(secondlargest<a[i]&&a[i]!=largest){
          secondlargest=a[i];
      }
  }
  
cout<<secondlargest;
    return 0;
}
