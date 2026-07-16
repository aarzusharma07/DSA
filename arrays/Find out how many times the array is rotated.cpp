class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int lb=0;
        int ub=nums.size()-1;
        
        while(lb<=ub){
            int mid=lb+(ub-lb)/2;
           if(nums[mid]>=nums[ub]){
            lb=mid+1;
           }else{
            ub=mid;
           }
        }
        return lb-1;
    }
};
