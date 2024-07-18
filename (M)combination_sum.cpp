#include <iostream>
#include <vector>
using namespace std;

class Solution {
    void findCombination(int index, int target, vector<int>&candidates,  vector<vector<int>> &ans, vector<int> &currentCombination ){
        if(index==candidates.size()){
            if(target==0){
                ans.push_back(currentCombination);
            }
            return;
        }

        if(candidates[index]<=target){
            currentCombination.push_back(candidates[index]);

            findCombination(index, target-candidates[index],candidates, ans, currentCombination );

            currentCombination.pop_back();
        }

        findCombination(index+1, target,candidates, ans, currentCombination);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> currentCombination;

        findCombination(0, target, candidates, ans, currentCombination);

        return ans;
    }
};

int main() {
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    Solution sol;
    vector<vector<int>> result = sol.combinationSum(candidates, target);

    cout << "Combinations that sum up to " << target << " are:" << endl;
    for(const auto& combination : result) {
        cout << "[ ";
        for(int num : combination) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
