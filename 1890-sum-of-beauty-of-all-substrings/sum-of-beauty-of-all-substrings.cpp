class Solution {
public:
    int cal(vector<int>&freq)
    {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<26;i++)
        {
            if(freq[i]>0){
            maxi=max(freq[i],maxi);
            mini=min(freq[i],mini);
            }
        }
        return maxi-mini;
    }
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            vector<int>freq(26,0);
            for(int j=i;j<s.size();j++)
            {
                freq[s[j]-'a']++;
                 sum+=cal(freq);
            }
           
        }
        return sum;
    }
};