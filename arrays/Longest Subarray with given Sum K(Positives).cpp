// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;
vector<int> subarray(vector<int> nums,int k){
	vector<int> result;
	vector<int> longest;
	int size=0;
	int ans=0;
	for(int i=0;i<nums.size();i++){
		ans=0;
		for(int j=i;j<nums.size();j++){
			ans=ans+nums[j];
			if(ans==k){
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
		longest.push_back(0);
	}
	return longest;
   
	
}

int main() {
  vector<int> a={10, 5, 2, 7, 1, 9};

  vector<int> result=subarray(a,15);
  for(int x: result){
  	cout<<x<<" ";
  }
    
      return 0;
}
