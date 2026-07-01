class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //move to every string sort the string and store it in a map last me push second field into ans

        unordered_map<string,vector<string>> mp;
        vector<vector<string>> result;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(begin(temp),end(temp));
            mp[temp].push_back(strs[i]);

        }
       for(auto it:mp){
        result.push_back(it.second);
       }
       return result;
    }
};