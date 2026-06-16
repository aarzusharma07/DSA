class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int loc=-1;
        int key=-1;
        if(nums[0]<0){
            for(int i=1;i<nums.size();i++){
                if(nums[i]>0){
                    loc=i;
                    key=nums[i];
                    for(int j=loc;j>0;j--){
                        nums[j]=nums[j-1];
                    }
                    nums[0]=key;
                    break;
                }
            }
        }

        for(int i=1;i<nums.size()-1;i++){
          
                if( i%2==0 && nums[i]<0){
                    for(int j=i+1;j<nums.size();j++){
                        if(nums[j]>0){
                            loc=j;
                            key=nums[j];
                            for(int m=loc;m>i;m--){
                                nums[m]=nums[m-1];
                            }
                            nums[i]=key;
                            break;
                        }
                    }
                }else if(i % 2 == 1 && nums[i] > 0){
                    for(int j=i+1;j<nums.size();j++){
                        if( nums[j]<0){
                            loc=j;
                            key=nums[j];
                            for(int m=loc;m>i;m--){
                                nums[m]=nums[m-1];
                            }
                            nums[i]=key;
                            break;
                        }
                    }
                }
            
        }
        return nums;
    }
};
