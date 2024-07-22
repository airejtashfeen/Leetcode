#include <iostream>
#include <vector>

using namespace std;

//DUTCH NATIONAL FLAG ALGORITHM
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int low=0, mid=0, high= nums.size()-1;

       while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }

        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid], nums[high]);
            high--;
        }
       }
    }
};

// Main function for testing
int main() {
    Solution solution;
    vector<int> nums = {2, 0, 2, 1, 1, 0}; // Example input

    solution.sortColors(nums);

    cout << "Sorted colors: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
