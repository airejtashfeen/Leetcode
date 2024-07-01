#include <iostream>
#include <cmath>
using namespace std;

class DivideTwoIntegers {
public:
    int divide(int dividend, int divisor) {
        // Check for overflow
        if (divisor == 0 || (dividend == INT_MIN && divisor == -1)) {
            return INT_MAX;
        }

        // Sign of result
        int sign = (dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0) ? -1 : 1;

        // Take the absolute value
        long long dd = abs((long long)dividend);
        long long dv = abs((long long)divisor);

        int quotient = 0;
        while (dv<= dd) {
        long long sum = dv, countt=1;
         while (sum<=dd-sum){
            sum=sum*2;
            countt=countt*2;
         }
         quotient+=countt;
         dd= dd-sum;
        }

        return sign == -1 ? -quotient : quotient;
    }
};

int main() {
    DivideTwoIntegers d;
    int dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    int result = d.divide(dividend, divisor);
    cout << "Result: " << result << endl;
    return 0;
}
