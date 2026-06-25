class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r= matrix.size();
        int col= matrix[0].size();
        int low=0;
        int high= r*col-1;
        while(low<=high ){
            int mid=low+(high-low)/2;
            int rVal=mid/col;
            int lVal=mid%col;
            if( matrix[rVal][lVal]>target)
            high= mid-1;
            else if( matrix[rVal][lVal]==target)
            return true;
            else low= mid+1;
        }
        return false;
    }
};
