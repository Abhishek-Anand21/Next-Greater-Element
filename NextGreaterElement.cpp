class Solution
{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long> st;
        vector<long long> v(n,-1);
        for(int i=n-1;i>=0;i--) {
            if(!st.empty() && st.top() > arr[i])
                v[i] = st.top();
            else {
                while(!st.empty() && st.top() < arr[i])
                    st.pop();
                if(!st.empty())
                    v[i] = st.top();
            } 
            st.push(arr[i]);
        }
        return v;
    }
};
