#include <queue>
#include <iostream>
using namespace std;

class MyStack {
private:
    queue<int> q;

public:
    MyStack() {}
    
    void push(int x) {
        q.push(x);
        int n = q.size();
        for (int i = 0; i < n - 1; ++i) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int topElement = q.front();
        q.pop();
        return topElement;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

int main() {
    MyStack* obj = new MyStack();
    obj->push(1);
    obj->push(2);
    obj->push(3);
    cout << "Top element: " << obj->top() << endl;  // Should print 3
    cout << "Popped element: " << obj->pop() << endl;  // Should print 3
    cout << "Top element after pop: " << obj->top() << endl;  // Should print 2
    cout << "Is empty: " << obj->empty() << endl;  // Should print 0 (false)
    return 0;
}