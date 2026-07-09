class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        int i=0;

        int n=s.size();
        if(n==0){
            return;
        }
        for(int i=0;i<n;i++){
            st.push(s[i]);
        }
        while(!st.empty()){
            s[i]=st.top();
            st.pop();
            i++;
        }
    }
};