#include <iostream>
#include <stack>

class MyQueue {
private:
    std::stack<int> st;

public:
    MyQueue() {}

    void push(int x) {
        if (st.empty()) {
            st.push(x);
            return;
        }
        int topElement = st.top();
        st.pop();
        push(x);
        st.push(topElement);
    }

    int pop() {
        int topElement = st.top();
        st.pop();
        return topElement;
    }

    int peek() {
        return st.top();
    }

    bool empty() {
        return st.empty();
    }
};

int main() {
    MyQueue q;

    q.push(1);
    q.push(2);
    q.push(3);

    std::cout << "Front element: " << q.peek() << std::endl;
    q.pop();
    std::cout << "Front element after pop: " << q.peek() << std::endl;
    q.pop();
    std::cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << std::endl;
    
    return 0;
}
