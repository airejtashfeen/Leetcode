#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm> // for transform
#include <cctype> // for tolower
#include <climits> // for INT_MAX

using namespace std;

class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        transform(licensePlate.begin(), licensePlate.end(), licensePlate.begin(), ::tolower);
        
        unordered_map<char, int> licensePlateFreq;
        for (char c : licensePlate) {
            if (isalpha(c)) {
                licensePlateFreq[c]++;
            }
        }
        
        string shortestWord;
        int minLength = INT_MAX;
        
        for (const string& word : words) {
            unordered_map<char, int> wordFreq;
            for (char c : word) {
                wordFreq[c]++;
            }
            
            bool containsAll = true;
            for (auto& pair : licensePlateFreq) {
                char c = pair.first;
                if (wordFreq[c] < licensePlateFreq[c]) {
                    containsAll = false;
                    break;
                }
            }
            
            if (containsAll && word.length() < minLength) {
                shortestWord = word;
                minLength = word.length();
            }
        }
        
        return shortestWord;
    }
};

int main() {
    Solution solution;

    // Example usage
    string licensePlate = "1s3 PSt";
    vector<string> words = {"step", "steps", "stripe", "stepple"};

    string shortest = solution.shortestCompletingWord(licensePlate, words);
    cout << "Shortest completing word: " << shortest << endl;

    return 0;
}
