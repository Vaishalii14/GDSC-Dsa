class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int m=matrix.size();
        int start;
        int i=0;
        int n=matrix[i].size();
        int j=n-1;

            start=matrix[i][j];

        if(target==start && j>=0 && i<m){
            start=matrix[i][j];
                return true;
        }

        while(target!=start && j>=0 && i<m){
            start=matrix[i][j];
            if(target>start){
                i++;
            }
            else if(target<start){
                j--;
            }
            else {
                return true;
            }
        }



       return false;
    }

};
