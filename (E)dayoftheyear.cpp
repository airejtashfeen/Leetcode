#include <iostream>
#include <string>
using namespace std;

//Extremely Naive i know but was easy so i let that slide

class Solution {
public:
    int dayOfYear(string date) {
        int days = 0;
      
        string currentDate = date.substr(8, 2);
        days += stoi(currentDate);
        string currentMonth = date.substr(5, 2);

        string currentYear = date.substr(0, 4);
        int leapCheck = stoi(currentYear);

        int i = stoi(currentMonth);
        if (leapCheck % 4 == 0 && (leapCheck % 100 != 0 || leapCheck % 400 == 0) && i > 2) {
            days += 1;
        }

        while (i >= 2) {
            if (i == 5 || i == 7 || i == 10 || i == 12) {
                days += 30;
            } else if (i == 3) {
                days += 28;
            } else {
                days += 31;
            }
            i--;
        }
        return days;
    }
};

int main() {
    Solution sol;
    string date = "2023-07-06";
    int dayOfYear = sol.dayOfYear(date);
    cout << "The day of the year for the date " << date << " is: " << dayOfYear << endl;

    date = "2020-03-01"; // Leap year example
    dayOfYear = sol.dayOfYear(date);
    cout << "The day of the year for the date " << date << " is: " << dayOfYear << endl;

    return 0;
}
