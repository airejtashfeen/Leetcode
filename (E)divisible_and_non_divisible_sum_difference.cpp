#include <iostream>

using namespace std;

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum1=0,sum2=0;
        
        for(int i=1; i<=n; i++){
            if(i%m!=0){
                sum1+=i;
            }
        }

        for(int i=1; i<=n; i++){
            if(i%m==0){
                sum2+=i;
            }
        }

        return sum1-sum2;
    }
};

int main() {
    int n, m;
    cout << "Enter the values of n and m: ";
    cin >> n >> m;

    Solution solution;
    int result = solution.differenceOfSums(n, m);

    cout << "The difference of sums is: " << result << endl;

    return 0;
}