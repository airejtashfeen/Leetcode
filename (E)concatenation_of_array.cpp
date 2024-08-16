#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans(n*2);

        for(int i=0; i<n; i++){
            ans[i]= nums[i];
            ans[i+n]= nums[i]; 
        }

        return ans;
    }
}

int main() {
    Solution solution;

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = solution.getConcatenation(nums);

    cout << "Concatenated array: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
