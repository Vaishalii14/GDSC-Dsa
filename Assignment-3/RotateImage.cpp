class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int k;
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);

            }
        }
       int j=0;
        while(j<n/2){
        for(int i=0;i<n;i++){
                k=n-1-j;
               swap(matrix[i][j],matrix[i][k]);

        }
            j++;
        }




    }
};
