
#include <bits/stdc++.h>

using namespace std;
vector<int> subarray(vector<int> nums){
	vector<int> ans;
	int len;
	int sum=0;
	int maxi=INT_MIN;
	for(int i=0;i<nums.size();i++){
		sum=0;
		for(int j=i;j<nums.size();j++){
			sum=sum+nums[j];
			if(sum==0){
				len=j-i+1;
				if(len >maxi){
					maxi=len;
						ans.clear();
					for(int k=i;k<=j;k++){
					
						ans.push_back(nums[k]);
					}
				}
			}
		
		}
		
	}
	
	
	return ans ;
}

int main() {
  vector<int> a={9, -3, 3, -1, 6, -5};
vector<int> result=subarray(a);
for(int x:result){
	cout<<x<<" ";
}
      return 0;
}
