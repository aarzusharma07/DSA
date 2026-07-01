
#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> xorr(vector<int> nums,int target){
	vector<vector<int>> ans;
int sum=0;


	for(int i=0;i<nums.size();i++){
	sum=0;
		for(int j=i;j<nums.size();j++){
			sum=sum ^ nums[j];
			if(sum == target){
		       
			
				
					
					ans.push_back(vector<int>(nums.begin()+i, nums.begin()+j+1));
					
				}
			
		
		}
		
	}
	
	
	return ans ;
}

int main() {
  vector<int> a={4, 2, 2, 6, 4};
  vector<vector<int>> result = xorr(a, 6);
for(auto v : result){
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;
}
      return 0;
}
