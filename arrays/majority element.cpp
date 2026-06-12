class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxi=0;
        int count=0;
        int majority;
        for(int i=0;i<nums.size();i++){
            count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                   count++;
           }
        }
        if(count>maxi){
maxi=count;
majority=nums[i];
        }
            }
           

        return majority;
    }
};
