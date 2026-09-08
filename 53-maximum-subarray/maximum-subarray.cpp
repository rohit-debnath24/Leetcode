class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mS=INT_MIN;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            mS=max(mS,sum);
            if(sum<0){
                sum=0;
            }
        }
        return mS;
    }
};