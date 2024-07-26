#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>sortedScores= score;

        sort(sortedScores.begin(), sortedScores.end(), greater<int>());

        unordered_map<int, string> hashMap;

        for(int i=0; i<sortedScores.size(); i++){
            if(i==0) hashMap[sortedScores[i]]= "Gold Medal";
            else if(i==1) hashMap[sortedScores[i]]= "Silver Medal";
            else if(i==2) hashMap[sortedScores[i]]= "Bronze Medal";
            else hashMap[sortedScores[i]]= to_string(i+1);
        }

        vector<string>result;

        for(int s: score){
            result.push_back(hashMap[s]);
        }

        return result;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> scores = {5, 4, 3, 2, 1};  // Example scores
    vector<string> ranks = sol.findRelativeRanks(scores);

    for (const string& rank : ranks) {
        cout << rank << " ";
    }
    cout << endl;

    return 0;
}
