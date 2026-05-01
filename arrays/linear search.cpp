// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int arr[]={1,2,0,1,0,4,0};
int k,temp=0;
int n =sizeof(arr)/sizeof(arr[0]);
cin>>k;
for( int i=0;i<n;i++){
 if(arr[i]==k){
   temp=i;
 }
}
if(temp==0){
	cout<<"-1";
	
}else{
	cout<<temp;
}
    return 0;
}
