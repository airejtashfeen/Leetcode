#include <iostream>
#include <vector>

using namespace std;

class Solution {
    void backtrack(int index, vector<int>& candidates, vector<vector<int>>& result, vector<int>& ds, int target) {
        if (target == 0) {
            result.push_back(ds);
            return;
        }
        
        for (int i = index; i < candidates.size(); i++) {
           
            if (i > index && candidates[i] == candidates[i - 1]) continue;
            
            if (candidates[i] > target) break; 
            
            ds.push_back(candidates[i]);
            backtrack(i + 1, candidates, result, ds, target - candidates[i]);
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); 
        vector<vector<int>> result;
        vector<int> ds;
        backtrack(0, candidates, result, ds, target);
        return result;
    }
};

int main() {
    Solution sol;

    // Test case 1
    std::vector<int> candidates1 = {10, 1, 2, 7, 6, 5};
    int target1 = 8;
    std::vector<std::vector<int>> result1 = sol.combinationSum2(candidates1, target1);
    
    std::cout << "Test Case 1 Results:" << std::endl;
    for (const auto& combination : result1) {
        for (int num : combination) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    
    // Test case 2
    std::vector<int> candidates2 = {1, 1, 1, 1, 1};
    int target2 = 2;
    std::vector<std::vector<int>> result2 = sol.combinationSum2(candidates2, target2);
    
    std::cout << "Test Case 2 Results:" << std::endl;
    for (const auto& combination : result2) {
        for (int num : combination) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    // Test case 3
    std::vector<int> candidates3 = {2, 5, 2, 1, 2};
    int target3 = 5;
    std::vector<std::vector<int>> result3 = sol.combinationSum2(candidates3, target3);
    
    std::cout << "Test Case 3 Results:" << std::endl;
    for (const auto& combination : result3) {
        for (int num : combination) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
