// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;
vector<int> subarray(vector<int> nums){
	vector<int> result;
	int start=-1;int end=-1;
	int sum=0;
	int maxi=INT_MIN;
	for(int i=0;i<nums.size();i++){
		sum=0;
		for(int j=i;j<nums.size();j++){
			sum=sum+nums[j];
			if(sum>maxi){
				maxi=sum;
				start=i;
				end=j;
			}
		}
		
	}
	for(int m=start;m<=end;m++){
			result.push_back(nums[m]);
		}
	
	return result ;
}

int main() {
  vector<int> a={-2,1,-3,4,-1,2,1,-5,4};
vector<int> result=subarray(a);
for(int x:result){
	cout<<x<<" ";
}
      return 0;
}
