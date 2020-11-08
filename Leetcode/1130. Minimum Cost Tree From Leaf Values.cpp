class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int res = 0;
        stack<int> st;
        for(auto i:arr){
            // cout << "pos " << i << endl;
            while(!st.empty() && st.top()<=i){
                int tp = st.top();
                st.pop();
                // cout << "pop" << " " << tp << endl;
                // check 2 sides of adjacents and find the minimum non leaf value
                res += tp * min(!st.empty()?st.top():INT_MAX, i);
                // cout <<  tp << " " << min(!st.empty()?st.top():INT_MAX, i) << endl;
            }
            
            st.push(i);
        }
        
        int a = st.top();
        st.pop();
        while(!st.empty()){
            int tp = st.top();
            st.pop();
            // cout << "pop" << " " << tp << endl;
            // check 2 sides of adjacents and find the minimum non leaf value
            res += tp * min(!st.empty()?st.top():INT_MAX, a);
            // cout << tp << " " << min(!st.empty()?st.top():INT_MAX, a) << endl;
            a = tp;
        }
        return res;
    }
};
