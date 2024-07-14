#include <iostream>

class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;

        if(n==1) return true;

        while(n%2==0){
            n/=2;
        }

        while(n%3==0){
            n/=3;
        }
        while(n%5==0){
            n/=5;
        }

        return n==1;
    }
};

int main() {
    Solution solution;
    
    // Test cases
    int nums[] = {6, 8, 14, 1, 0, -6};
    
    for (int num : nums) {
        if (solution.isUgly(num)) {
            std::cout << num << " is an ugly number." << std::endl;
        } else {
            std::cout << num << " is not an ugly number." << std::endl;
        }
    }
    
    return 0;
}
