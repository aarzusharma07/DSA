#include <bits/stdc++.h>

using namespace std;
int main() {
	int count=0;
   int arr[]={10,5,10,15,10,5};
   int n=sizeof(arr)/sizeof(arr[0]);
   int temp=0;
   for(int i=0;i<n;i++){
   	temp=max(temp,arr[i]);
   }
   vector<int> hash(temp+1,0);
   for( int i=0;i<n;i++){
   	hash[arr[i]]++;
   }
   int largest=0;
   int small=INT_MAX;
   for(int i=0;i<hash.size();i++){
   	largest=max(largest,hash[i]);
   	if(hash[i]>0){
   		small=min(small,hash[i]);
	   }
   
   }
   cout<<"largest freq. :"<<largest;
   cout<<"smallest freq. :"<<small;
    return 0;
}
