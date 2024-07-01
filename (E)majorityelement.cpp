//WE USE AN ALGORITHM CALLED BOYER-MOORE MAJORITY VOTING
//THIS DOES THE JOB IN 0(N) TIME AND 0(1) SPACE

#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = -1;
        int count = 0;

    //FIND A CANDIDATE 
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
                count = 1;
            } else if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        //VERIFY HERE
        count = 0; 
        for (int num : nums) {
            if (num == candidate) {
                count++;
            }
        }

        if (count > nums.size() / 2) {
            return candidate;
        } else {
            throw runtime_error("No majority element found");
        }
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    try {
        int majorityElement = solution.majorityElement(nums);
        cout << "The majority element is: " << majorityElement << endl;
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}
