#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> hashMap;

        for(int num: nums){
            ++hashMap[num];
        }

        sort(nums.begin(), nums.end(), [&hashMap](int a, int b){
            if(hashMap[a] == hashMap[b]){
                return a > b;
            }
            return hashMap[a] < hashMap[b];
        });

        return nums;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3, 4};  // Example input
    vector<int> sortedNums = sol.frequencySort(nums);
    
    cout << "Sorted array by frequency and value: ";
    for(int num : sortedNums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
