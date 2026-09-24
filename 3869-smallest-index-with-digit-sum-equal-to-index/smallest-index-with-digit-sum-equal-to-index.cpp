class Solution {
public:
    int sum(int n)
    {
        int s=0;
        while(n!=0)
        {
            int r=n%10;
            s=s+r;
            n=n/10;
        }
        return s;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(i==sum(nums[i]))
                return i;
        }
        return -1;
    }
};