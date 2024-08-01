#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false; 

        for (int i = 2; i * i < n; ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n; ++i) {
            if (isPrime[i]) {
                ++count;
            }
        }

        return count;
    }
};

int main() {
    Solution sol;

    // Test case 1
    int n1 = 10;
    cout << "Number of primes less than " << n1 << ": " << sol.countPrimes(n1) << endl;

    // Test case 2
    int n2 = 20;
    cout << "Number of primes less than " << n2 << ": " << sol.countPrimes(n2) << endl;

    // Test case 3
    int n3 = 50;
    cout << "Number of primes less than " << n3 << ": " << sol.countPrimes(n3) << endl;

    // Test case 4
    int n4 = 100;
    cout << "Number of primes less than " << n4 << ": " << sol.countPrimes(n4) << endl;

    // Test case 5
    int n5 = 200;
    cout << "Number of primes less than " << n5 << ": " << sol.countPrimes(n5) << endl;

    return 0;
}
