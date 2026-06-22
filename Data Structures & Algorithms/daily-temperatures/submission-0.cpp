class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        for( int i=0;i<n;i++){
            int count=0;
            for( int j=i;j<n;j++){
                if( nums[i]>=nums[j]) count++;
                else{
                    ans[i]=count;
                    break;
                }

            }
        }
        return ans;
        
    }
};
