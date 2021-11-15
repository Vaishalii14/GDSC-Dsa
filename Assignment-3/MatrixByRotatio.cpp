
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    for(int i=0;i<=3;i++){
        if(mat==target){
            return true;
        }
        int n=mat.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(mat[i][j],mat[j][i]);

            }
        }
       int j=0,k;
        while(j<n/2){
        for(int i=0;i<n;i++){
                k=n-1-j;
               swap(mat[i][j],mat[i][k]);

        }
            j++;
        }
    }
        return false;


    }
};
