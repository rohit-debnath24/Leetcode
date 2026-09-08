class Solution {
public:
    int countCommas(int n) {
        int res=0;
        if(n<1000){
            return res;
        }else{
            res=n-1000+1;
        }
        return res;
    }
};