#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
    unordered_set<int>seen;
    while(n!=1 && seen.find(n)==seen.end()){
        seen.insert(n);
        n= getNext(n);
    }
    if(n==1) return true;
    return false;
    }


    private:

    int getNext(int n){
        int answer=0;
          while(n>0){
           int digit= n%10;
           answer= answer+ (digit*digit);
           n/=10;
        }
        return answer;
    }
      
};

int main() {
    Solution solution;
    
    // Test cases
    int num1 = 19;
    int num2 = 2;
    
    cout << num1 << " is " << (solution.isHappy(num1) ? "a happy number." : "not a happy number.") << endl;
    cout << num2 << " is " << (solution.isHappy(num2) ? "a happy number." : "not a happy number.") << endl;
    
    return 0;
}