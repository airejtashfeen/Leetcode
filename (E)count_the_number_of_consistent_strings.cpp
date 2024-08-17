#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> hashSet(allowed.begin(), allowed.end());
        int count = 0;

        for(int i = 0; i < words.size(); i++){
            bool flag = true;
            for(char ch : words[i]){
                if(hashSet.find(ch) == hashSet.end()){
                    flag = false;
                    break;
                }
            }
            if(flag) count++;
        }

        return count;
    }
};

int main() {
    Solution sol;

    string allowed = "ab";
    vector<string> words = {"ad", "bd", "aaab", "baa", "badab"};

    int result = sol.countConsistentStrings(allowed, words);

    cout << "Number of consistent strings: " << result << endl;

    return 0;
}
