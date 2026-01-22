class Solution {
public:
    string removeKdigits(string num, int k) {
            // check if upcoming is less than the top then push

            // if k limit exceeds then blindly push all the nums
            //  count gets ++ only when a number greater than stacked
            //  number pushed to the stack
        int n=num.size();
        int count = 0;

        string res="";
        stack<int> st;

        for(int i=0;i<n;i++){
            while(!st.empty() && k>0 && (st.top()-'0') >( num[i]-'0')){
                st.pop();
                k=k-1;
            }
            st.push(num[i]);
        }
        while(k>0){ 

        st.pop();
         k--;
        } 



        if (st.empty()){
            //puttng a check that if size is equal to k

            return "0";
        }
        else{
            while(!st.empty()){
                res+=st.top();
                st.pop();
            }
            while(res.size()!=0 && res.back()=='0'){
                res.pop_back();
            }
            reverse(res.begin(),res.end());

        }

        if(res.empty()){
        return "0";
        } 
        else {
            return res;
        }
    }
};