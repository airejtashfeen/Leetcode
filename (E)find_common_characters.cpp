#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result;
        unordered_map<char, int> hashMap;
\
        for (char c : words[0]) {
            hashMap[c]++;
        }

        for (int i = 1; i < words.size(); i++) {
            unordered_map<char, int> currentHashMap;
            for (char c : words[i]) {
                currentHashMap[c]++;
            }

            for (auto& it : hashMap) {
                char c = it.first;
                if (currentHashMap.find(c) != currentHashMap.end()) {
                    hashMap[c] = min(currentHashMap[c], hashMap[c]);
                } else {
                    hashMap[c] = 0;
                }
            }
        }

        for (auto& it : hashMap) {
            int count = it.second;
            for (int i = 0; i < count; i++) {
                result.push_back(string(1, it.first));
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    
    // Define a vector of strings as input
    vector<string> words = {"bella", "label", "roller"};
    
    // Call the commonChars function
    vector<string> common = sol.commonChars(words);
    
    // Print the result
    cout << "[";
    for (size_t i = 0; i < common.size(); ++i) {
        cout << common[i];
        if (i < common.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
