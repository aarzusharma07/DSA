// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int a[]={1,2,5,8};
  int n=sizeof(a)/sizeof(a[0]);
  int c=0;
 for(int i=0;i<n;i++){
    if(a[i]<a[i+1] || a[i]==a[i+1]){
        c=1;
    }else{
        c=0;
        break;
    }
 }
 if(c==1){
     cout<<"true";
 }else{
     cout<<"false";
 }
    return 0;
}
