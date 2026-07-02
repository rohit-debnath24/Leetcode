class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
            int n=nums.size();
            bool status;
            bool statusf;
            bool statusc;
            int tickf=1;
            int tickc=1;
            // bool status;

            if(n==0 || n==1){
                return true;
            }
        for(int i=0;i<n-1;i++){
            if(nums[i]>=nums[i+1] && tickf==1 ){
                statusf=true;
                tickf=1;
            }
            else{
                statusf=false;
                tickf=0;
            }
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]<=nums[i+1] && tickc==1 ){
                statusc=true;
                tickc=1;
            }
            else{
                statusc=false;
                tickc=0;
            }
        }


        if(statusf==false && statusc==false){
            status=false;
        }else{
            status=true;
        }

        return status;
    }
};