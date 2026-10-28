class MyQueue {
private:
    stack<int> st;

public:
    MyQueue() {

    }

    void push(int x) {
        stack<int> temp;

        while (!st.empty()) {
            temp.push(st.top());
            st.pop();
        }

        st.push(x);

        while (!temp.empty()) {
            st.push(temp.top());
            temp.pop();
        }
    }

    int pop() {
        int ans = st.top();
        st.pop();
        return ans;
    }

    int peek() {
        return st.top();
    }

    bool empty() {
        return st.empty();
    }
};