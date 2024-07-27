#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        vector<int>result(n,0);
        int left=0;
        int right= n-1;
        int index=n-1;

        while(left<=right){
            if(abs(nums[left]) > abs(nums[right])){
                result[index--]= nums[left]*nums[left];
                left++;
            }
            else{
                result[index--]= nums[right]*nums[right];
                right--;
            }
        }
        return result;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {-4, -1, 0, 3, 10};

    // Get the sorted squares
    vector<int> result = sol.sortedSquares(nums);

    // Print the result
    cout << "Sorted squares: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
