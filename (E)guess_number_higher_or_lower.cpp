#include <iostream>

// Mock guess function for demonstration purposes
int pickedNumber = 6; // Change this number to test different scenarios

int guess(int num) {
    if (num > pickedNumber) return -1;
    if (num < pickedNumber) return 1;
    return 0;
}

class Solution {
public:
    int guessNumber(int n) {
        int high = n;
        int low = 1;

        while (high >= low) {
            int mid = low + (high - low) / 2;

            if (guess(mid) == 0) 
                return mid;

            else if (guess(mid) < 0) 
                high = mid - 1;

            else 
                low = mid + 1;
        }
        return -1;
    }
};

int main() {
    Solution solution;
    int n;
    std::cout << "Enter the upper limit for the guess: ";
    std::cin >> n;
    int result = solution.guessNumber(n);
    std::cout << "The picked number is: " << result << std::endl;
    return 0;
}
