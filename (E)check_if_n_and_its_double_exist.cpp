#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end()); 
        
        for (int i = 0; i < arr.size(); ++i) {
            for (int j = i + 1; j < arr.size(); ++j) {
                if (arr[j] == 2 * arr[i] || arr[i] == 2 * arr[j]) {
                    return true;
                }
            }
        }
        
        return false;
    }
};

int main() {
    Solution sol;
    
    vector<int> arr1 = {10, 2, 5, 3};
    cout << "Array {10, 2, 5, 3}: " << (sol.checkIfExist(arr1) ? "true" : "false") << endl;
    
    vector<int> arr2 = {7, 1, 14, 11};
    cout << "Array {7, 1, 14, 11}: " << (sol.checkIfExist(arr2) ? "true" : "false") << endl;
    
    vector<int> arr3 = {3, 1, 7, 11};
    cout << "Array {3, 1, 7, 11}: " << (sol.checkIfExist(arr3) ? "true" : "false") << endl;

    return 0;
}
