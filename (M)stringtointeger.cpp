#include <iostream>
#include <string>
#include <climits>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n= s.length();
        //Step 1 
        while(i<n && s[i]==' '){
            i++;
        }

        //Step 2
        bool negativeFlag= false;

        if(i<n && s[i]=='+' || s[i]=='-'){
            if(s[i]=='-'){
                negativeFlag=true;
            }
            i++;
        }

        //Step 3
        long long result=0;
        
        while(i<n && isdigit(s[i])){
            //This is an awesome formula since if we were reading 12, first it would give 1 easily
        //Second time it wont read 2 and append it. it would do 1*10 + (2-0) which would give 12 and result would be 12
            result= result*10 + (s[i]- '0');

            //STEP 4
            if(result>INT_MAX){
                if(negativeFlag==true){
                    return INT_MIN;
                }
                else{
                    return INT_MAX;
                }
            }

            i++;
        }

        return negativeFlag ? -result : result;
    }
};

int main() {
    Solution solution;

    // Test cases
    string test1 = "42";
    string test2 = "   -42";
    string test3 = "4193 with words";
    string test4 = "words and 987";
    string test5 = "-91283472332";

    cout << "Test case 1: \"" << test1 << "\" -> " << solution.myAtoi(test1) << endl;
    cout << "Test case 2: \"" << test2 << "\" -> " << solution.myAtoi(test2) << endl;
    cout << "Test case 3: \"" << test3 << "\" -> " << solution.myAtoi(test3) << endl;
    cout << "Test case 4: \"" << test4 << "\" -> " << solution.myAtoi(test4) << endl;
    cout << "Test case 5: \"" << test5 << "\" -> " << solution.myAtoi(test5) << endl;

    return 0;
}