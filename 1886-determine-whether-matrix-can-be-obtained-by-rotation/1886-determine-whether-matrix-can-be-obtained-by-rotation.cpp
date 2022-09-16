class Solution {
private:
    vector<vector<int>> rotate(vector<vector<int>> matrix) {
        int n=matrix.size();
//         swapping
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                int temp = matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
                // swap(matrix[i][j],matrix[j][i]);
            }
        }
//         rotating
        for(int i=0;i<n;i++)
        {
            int a=0, b=n-1;
            while(a<b){
                swap(matrix[i][a], matrix[i][b]);
                a++;
                b--;
            }
        }
        return matrix;
    }
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int a = 0;
        vector<vector<int>> b=mat;
        for(int i=0; i<4; i++){
            b = rotate(b);
            if(b==target){
                return true;
            }
        }
        return false;
    }
};