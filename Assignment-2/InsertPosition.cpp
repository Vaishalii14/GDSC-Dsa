class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        /*
        int start=0,end=nums.size()-1;
        while(end>=start){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                return mid+1;
            }
                if((end-start)==1){
                    return start+1;
                }

            else if(nums[mid]>target){
                start=mid;
            }
            else if(nums[mid]<target){
                end=mid;
            }
        }

    }
    */
         int start = 0, end = nums.size(), mid;
    while (start < end) {
        mid = (start + end) / 2;
        if (nums[mid] >= target)
            end = mid;
        else
            start = mid + 1;
    }
    return start;
    }
};
