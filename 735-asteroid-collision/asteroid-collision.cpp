class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        //put it in the stack - check if the magnitude is pos or neg 
        //if opposite sign then check if magnitude is greater or not 
        // if greater then the st.top() wins or else the value 
        
        vector<int> st;
        int n=asteroids.size();
        for(int i=0;i<n;i++){
           
           if(asteroids[i]>0){
            st.push_back(asteroids[i]);

           }
           else{
            while (!st.empty() && st.back()>0 && abs(asteroids[i])>st.back()){
                st.pop_back();
            }
            if(!st.empty()&& st.back()==abs(asteroids[i])){
                    st.pop_back();
            }else if(st.empty() || st.back()<0){
                st.push_back(asteroids[i]);
            }


           }

        }

       return st;
        
    }
};