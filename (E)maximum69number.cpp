#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maximum69Number(int num) {
        string check = to_string(num);
        for (int i = 0; i < check.length(); i++) {
            if (check[i] == '6') {
                check[i] = '9';
                break;
            }
        }
        int ans = stoi(check);
        return ans;
    }
};

int main() {
    Solution sol;
    
    int num = 9669;
    int result = sol.maximum69Number(num);
    cout << "The maximum number after changing one '6' to '9' in " << num << " is: " << result << endl;

    num = 9996;
    result = sol.maximum69Number(num);
    cout << "The maximum number after changing one '6' to '9' in " << num << " is: " << result << endl;

    num = 9999;
    result = sol.maximum69Number(num);
    cout << "The maximum number after changing one '6' to '9' in " << num << " is: " << result << endl;

    return 0;
}
