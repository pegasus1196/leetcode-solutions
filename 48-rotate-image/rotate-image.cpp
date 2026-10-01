class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> num=matrix;
        for(int i=num.size()-1; i>=0; i--)
        {
            for(int j=0; j<num[0].size(); j++)
            {
                 matrix[j][num.size()-i-1]=num[i][j];
            }
        }
        
    }
};