// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int arr[]={1,2,0,1,0,4,0};
int n =sizeof(arr)/sizeof(arr[0]);
vector<int> temp;
int j=0;
for( int i=0;i<n;i++){
	if(arr[i]>0){
		temp.push_back(arr[i]);
		j++;
	}
}
j=0;
for( int i=0;i<n;i++){
	if(temp[j]>0){
		arr[i]=temp[j];
		j++;
	}else{
		arr[i]=0;
	}
}
for( int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
    return 0;
}
