#include <iostream>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        while(n%2==0){
            n/=2;
        }
        return n==1;
    }

};

int main() {
    Solution solution;
    
    // Test cases
    int nums[] = {1, 2, 3, 4, 5, 16, 31, 32, -1, 0, 64};
    
    for (int num : nums) {
        if (solution.isPowerOfTwo(num)) {
            std::cout << num << " is a power of two." << std::endl;
        } else {
            std::cout << num << " is not a power of two." << std::endl;
        }
    }
    
    return 0;
}
