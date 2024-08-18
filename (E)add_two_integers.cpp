#include <iostream>

using namespace std;

// BY FAR THE FUNNIEST QUESTION ON LEETCODE
class Solution {
public:
    int sum(int num1, int num2) {
        return num1+num2;
    }
};

int main(){

    Solution sol;

    int num1= 6;
    int num2= 10;

    cout<<"The sum is:"<< sol.sum(num1,num2);
}