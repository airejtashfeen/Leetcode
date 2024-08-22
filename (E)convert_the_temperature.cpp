#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.8 + 32.0;
        ans.push_back(kelvin);
        ans.push_back(fahrenheit);
        return ans;
    }
};

int main() {
    double celsius = 36.50; 
    Solution solution;
    vector<double> result = solution.convertTemperature(celsius);
    cout << "Kelvin: " << result[0] << endl;
    cout << "Fahrenheit: " << result[1] << endl;
    return 0;
}