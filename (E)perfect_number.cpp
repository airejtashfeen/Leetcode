#include <iostream>

using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
         if (num <= 1) {
            return false;
        }

        int ans=1;
        for(int i=2; i<=num/2; i++){
            if(num%i==0){
                ans+= i;
            }
        }
        if(ans==num){
            return true;
        }
        return false;
        }
       
};

int main() {
    Solution solution;

    // Test cases
    int num1 = 6;
    int num2 = 28;
    int num3 = 496;
    int num4 = 8128;
    int num5 = 10;
    int num6 = 1;
    int num7 = 0;
    
    cout << num1 << " is a perfect number? " << boolalpha << solution.checkPerfectNumber(num1) << endl;
    cout << num2 << " is a perfect number? " << boolalpha << solution.checkPerfectNumber(num2) << endl;
    cout << num3 << " is a perfect number? " << boolalpha << solution.checkPerfectNumber(num3) << endl;
    cout << num4 << " is a perfect number? " << boolalpha << solution.checkPerfectNumber(num4) << endl;
    cout << num5 << " is a perfect number? " << boolalpha << solution.checkPerfectNumber(num5) << endl;
    cout << num6 << " is a perfect number? " << boolalpha << solution.checkPerfectNumber(num6) << endl;
    cout << num7 << " is a perfect number? " << boolalpha << solution.checkPerfectNumber(num7) << endl;

    return 0;
}
