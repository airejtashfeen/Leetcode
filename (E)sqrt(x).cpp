#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x<=1) return x;

        int low = 1, high = x;
        int ans;
        while(low <= high){
            int mid = low + (high - low) / 2;
            long long midSquared = (long long) mid * mid;
            
            if(midSquared <= x){
                ans = mid;
                low = mid + 1;
            }
            else if(midSquared > x){
                high = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    int x;
    cout << "Enter a number: ";
    cin >> x;
    int result = solution.mySqrt(x);
    cout << "The square root of " << x << " is approximately " << result << endl;
    return 0;
}
