#include <iostream>
#include <climits>

using namespace std;

class MinStack {
private:
    std::stack<int>stack;
    std::stack<int>minStack;
public:
    MinStack() {
        minStack.push(INT_MAX);
    }
    
    void push(int val) {
        stack.push(val);
        minStack.push(min(val, minStack.top()));
    }
    
    void pop() {
        stack.pop();
        minStack.pop();
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
     
};

int main() {
  // Create a MinStack object
  MinStack minStack;

  // Push some elements onto the stack
  minStack.push(5);
  minStack.push(3);
  minStack.push(2);
  minStack.push(8);

  // Get the minimum element
  cout << "Minimum element: " << minStack.getMin() << endl;  // Output: Minimum element: 2

  // Pop some elements
  minStack.pop();
  minStack.pop();

  // Get the minimum element again
  cout << "Minimum element: " << minStack.getMin() << endl;  // Output: Minimum element: 3

  return 0;
}