class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int j=nums.size()-1;
        int n=0;
        while(n<=j){
            int lsum=0,rsum=0;
            for(int i=0;i<n;i++){
                lsum=lsum+nums[i];
            }
            for(int i=j;i>n;i--){
                rsum=rsum+nums[i];

            }
        if(lsum==rsum){
            return n;
        }
        else{
            n++;
        }

        }
        return -1;

    }
};
