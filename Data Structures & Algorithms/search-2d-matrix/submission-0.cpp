class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for( int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                int value= matrix[i][j];
                if( value==target)
                return true;
                else if( value>target)
                return false;
            }
        }
        return false;
    }
};
