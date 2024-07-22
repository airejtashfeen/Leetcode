#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while (left <= right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

int main() {
    Solution solution;
    
    // Example input
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    
    // Output before reversing
    cout << "Before reversing: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;
    
    // Reverse the string
    solution.reverseString(s);
    
    // Output after reversing
    cout << "After reversing: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;
    
    return 0;
}
