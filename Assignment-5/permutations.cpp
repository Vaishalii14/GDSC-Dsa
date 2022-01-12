class Solution {
public:
    void permutations(vector<int>&nums,int i,vector<vector<int>>&answer){
        if(i==nums.size()){
            answer.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            permutations(nums,i+1,answer);
            swap(nums[i],nums[j]);
        }


    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>answer;
        permutations(nums,0,answer);
        return answer;
    }
};
