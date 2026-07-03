
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
vector<int> repeat(vector<int> nums){
	unordered_map<int,int> mp;
	int rep,mis;
	vector<int> ans;
	for(int i=1;i<=nums.size();i++){
		mp[i];
	}
	for(int x:nums){
		mp[x]++;
	}
	for(auto it:mp){
		if(it.second==0){
	  	rep=it.first;}
		if(it.second==2){
		 mis=it.first;
		}
	}
	ans.push_back(rep);
	ans.push_back(mis);
	return ans;
}

int main() {
  vector<int> a={1, 2, 3, 6, 7, 5, 7};
  vector<int> result=repeat(a);
  for(int x: result){
  	cout<<x<<" ";
  }
 
      return 0;
}
