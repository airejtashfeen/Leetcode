#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> hashMap;

        for (const string& element : arr) {
            ++hashMap[element];
        }
        int count = 0;
        for (const string& element : arr) {
            if (hashMap[element] == 1) {
                ++count;
                if (count == k) {
                    return element;
                }
            }
        }
        return "";
    }
};

int main() {
    Solution sol;
    vector<string> arr = {"d", "b", "c", "b", "c", "a"};
    int k = 2;
    cout << "The " << k << "th distinct element is: " << sol.kthDistinct(arr, k) << endl;
    return 0;
}
