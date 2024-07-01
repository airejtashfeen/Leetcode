class Solution {
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

        long long quotient = 0;
        while (dv <= dd) {
            long long sum = dv;
            long long countt = 1;
            while (sum + sum <= dd) {
                sum += sum;
                countt += countt;
            }
            quotient += countt;
            dd -= sum;
        }

        // Handle overflow and apply the sign
        quotient = sign * quotient;
        if (quotient > INT_MAX) {
            return INT_MAX;
        }

        return static_cast<int>(quotient);
    }
}; 