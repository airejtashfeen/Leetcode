#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countTriples(int n) {
        int count=0;

        for(int i=1; i<=n; ++i){
            for(int j=1; j<=n; ++j){
                for(int k=1; k<=n; ++k){
                    if((i*i)+ (j*j)== (k*k)){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int result = solution.countTriples(n);
    cout << "Number of Pythagorean triples for n = " << n << " is: " << result << endl;
    
    return 0;
}
