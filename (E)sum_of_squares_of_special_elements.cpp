#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        int n= nums.size();
        for(int i=0; i<n ; i++){
            int current=i+1;
            if(n%current==0 ){
                sum+= nums[i]*nums[i];
            }
        }

        return sum;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5}; 
    int result = Solution().sumOfSquares(nums);
    cout << "Sum of squares: " << result << endl;
    return 0;
}