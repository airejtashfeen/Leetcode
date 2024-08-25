#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;

        for(int i=0; i<words.size(); i++){
           for(int j=0; j<words[i].size(); j++){
            if(words[i][j]==x){
                result.push_back(i);
                break;
            }
           }
        }
        return result;
    }
};

int main() {
    vector<string> words = {"apple", "banana", "cherry", "date", "elderberry"};
    char x = 'a';

    Solution solution;
    vector<int> indices = solution.findWordsContaining(words, x);

    cout << "Indices of words containing the character '" << x << "': ";
    for (int index : indices) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}