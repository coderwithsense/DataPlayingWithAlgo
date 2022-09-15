class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int, bool> umapi;
        unordered_map<int, bool> umapj;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]==0){
                    umapi[i] = true;
                    umapj[j] = true;
                }
            }
        }
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(umapi[i]){
                    matrix[i][j] = 0;
                }
                if(umapj[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};