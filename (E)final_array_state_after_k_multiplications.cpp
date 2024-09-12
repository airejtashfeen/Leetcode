#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0; i<k; i++){
           auto minElement= min_element(nums.begin(), nums.end());

           if(minElement!= nums.end()){
            *minElement= *minElement*multiplier;
           }
        }

        return nums;
        
    }
};

int main() {
    // Create a vector of integers
    vector<int> nums = {1, 2, 3, 4, 5};

    // Set the number of iterations and the multiplier
    int k = 3;
    int multiplier = 2;

    // Call the getFinalState function
    Solution solution;
    vector<int> result = solution.getFinalState(nums, k, multiplier);

    // Print the final result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}