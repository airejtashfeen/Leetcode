#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {

        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        unordered_set<int> set3(nums3.begin(), nums3.end());
        
        unordered_map<int, int> countMap;
        
        for (int num : set1) {
            countMap[num]++;
        }
        
        for (int num : set2) {
            countMap[num]++;
        }
        
        for (int num : set3) {
            countMap[num]++;
        }
        
        vector<int> result;
        for (const auto& entry : countMap) {
            if (entry.second >= 2) {
                result.push_back(entry.first);
            }
        }
        
        return result;
    }
};



int main() {
    Solution solution;
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 3, 4};
    vector<int> nums3 = {3, 4, 5};
    
    vector<int> result = solution.twoOutOfThree(nums1, nums2, nums3);
    
    cout << "Elements appearing in at least two arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
