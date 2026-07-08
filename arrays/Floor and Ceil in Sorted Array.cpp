
#include <bits/stdc++.h>
#include <utility>
using namespace std;
pair<int,int> floorandceil(vector<int>& nums,int target){
 	int lower=0;
 	int upper=nums.size()-1;
 	int floor,ceil;
  	while(lower<=upper){
  		int mid=lower+(upper-lower)/2;
 		if(nums[mid]==target){
 			return {nums[mid],nums[mid]};
		 }
		 if(nums[mid]<target){
		 	floor=nums[mid];
		 	lower=mid+1;
		 	
		 }else{
		 	ceil=nums[mid];
		 	upper=mid-1;
		 }
	 }
	 
	 return {floor,ceil};
 }
int main() {
  vector<int> a={3, 4,4,7, 8,10};
  pair<int,int> ans=floorandceil(a,5);
  cout<<"The floor is"<<ans.first<<",and the ceiling  is "<<ans.second;
      return 0;
}
