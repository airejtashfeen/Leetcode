//WE AGAIN USE THE BOYER-MOORE MAJORITY VOTING ALGORITHM JUST MINOR CHANGES AND WE GET A MEDIUM LEVEL PROBLEM DONE
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1 = -1;
        int candidate2=-1;
        int count1 = 0;
        int count2=0;

    //FIND CANDIDATES, THERE CAN BE AT MOST 2 ELEMENTS SINCE WE'RE LOOKING FOR N/3 SO HERE WE GO
        for (int num : nums) {
            if(num==candidate1){
                count1++;
            }
            else if(num==candidate2){
                count2++;
            }else if (count1 == 0) {
                candidate1 = num;
                count1 = 1;
            } else if (count2 == 0) {
                candidate2 = num;
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }
        //VERIFY HERE
        count1=count2= 0; 
        for (int num : nums) {
            if (num == candidate1) {
                count1++;
            }
            else if(num==candidate2){
                count2++;
            }
            }

        vector<int>result;

        if(count1 > nums.size() / 3) {
           result.push_back(candidate1);
        } 
        if(count2>nums.size()/3){
            result.push_back(candidate2);
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 2, 3, 2, 1, 3, 3, 1};

    vector<int> majorityElements = solution.majorityElement(nums);

    cout << "Majority elements in the array: ";
    for (int num : majorityElements) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
