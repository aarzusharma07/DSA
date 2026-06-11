// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;
int  subarray(vector<int> nums){
	vector<int> result;
	vector<int> longest;
	int size=0;
	int ans=0;
	for(int i=0;i<nums.size();i++){
		ans=0;
		for(int j=i;j<nums.size();j++){
			ans=ans+nums[j];
			if(ans==0){
				result.clear();
				for(int m=i;m<=j;m++){
					result.push_back(nums[m]);
					
				}
			if(result.size()>size){
				size=result.size();
				longest=result;
			}
			
			}
		}
	}
	
	if(longest.empty()){
	return {};
	}
	return longest.size();
   
	
}

int main() {
  vector<int> a={9, -3, 3, -1, 6, -5};
cout<<subarray(a);
      return 0;
}
