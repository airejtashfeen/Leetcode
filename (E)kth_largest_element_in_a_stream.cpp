#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class KthLargest {
private:
    int k;
    priority_queue<int, vector<int>, greater<int>> minHeap;
public:
    KthLargest(int k, vector<int>& nums) : k(k) {
        for(int num : nums) {
            add(num);
        }
    }
    
    int add(int val) {
        minHeap.push(val);
        
        if(minHeap.size() > k) {
            minHeap.pop();
        }

        return minHeap.top();
    }
};

// Example usage
int main() {
    vector<int> nums = {4, 5, 8, 2};
    KthLargest* obj = new KthLargest(3, nums);
    
    cout << obj->add(3) << endl;  // returns 4
    cout << obj->add(5) << endl;  // returns 5
    cout << obj->add(10) << endl; // returns 5
    cout << obj->add(9) << endl;  // returns 8
    cout << obj->add(4) << endl;  // returns 8
    
    delete obj; // Clean up
    return 0;
}
