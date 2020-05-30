
class StockSpanner {
public:
    stack<int> st;
    vector<int> arr;
    vector<int>val;
    int index;
    StockSpanner() {
        index = 0;
    }
    
    int next(int price) {
        int cnt = 1;
        while(!st.empty() and  price >= val[st.top()])
        {
            cnt += arr[st.top()];
            st.pop();
        }
        st.push(index);
        val.push_back(price);
        arr.push_back(cnt);
        index++;
        return cnt; 
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
