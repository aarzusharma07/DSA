
#include <bits/stdc++.h>
#include <utility>
using namespace std;

    int occurences(vector<int>& nums, int target) {
        int lower=0;int first=-1;int last=-1;
        int upper=nums.size()-1;
        int ans;
        while(lower<=upper){
            int mid=lower+(upper-lower)/2;
            if(nums[mid]==target){
                first=mid;
                upper=mid-1;
            }else if(nums[mid]<target){
                lower=mid+1;
            }else{
                upper=mid-1;
            }
        }
        lower=0;
        upper=nums.size()-1;
        while(lower<=upper){
             int mid=lower+(upper-lower)/2;
            if(nums[mid]==target){
                last=mid;
                lower=mid+1;
            }else if(nums[mid]<target){
                lower=mid+1;
            }else{
                upper=mid-1;
            }
        }
       ans=(last-first)+1;
        return ans;
    }
int main() {
  vector<int> a={1, 1, 2, 2, 2, 2, 2, 3};
   cout<<occurences(a,2);
 
      return 0;
}
