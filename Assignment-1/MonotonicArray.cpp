class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i=0;
        int flag=0;
        while(i<nums.size()-1){
            if(nums[i+1]>=nums[i]){
                i++;

            }
            else{
                flag=1;
                break;
            }
        }
        i=0;
    if(flag==1){
        while(i<nums.size()-1){
            if(nums[i+1]<=nums[i]){
                i++;
                flag=0;
            }
            else{
                flag=1;
                break;
            }

        }
    }
        if(flag==1){
            return false;
        }
        else{
            return true;
        }
    }
};
//


