#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>   
 ans;
        int n = s.size();   

        
        for (int i = 0; i < n; i += k) {
            string temp = s.substr(i, k);
            if (temp.size() < k) {
                temp.resize(k, fill);
            }
            ans.push_back(temp);
        }
        
        return ans;
    }
};

int main() {
    Solution solution;
    string s;
    int k;
    char fill;

    cout << "Enter the string: ";
    getline(cin, s);
    cout << "Enter the substring length: ";
    cin >> k;
    cout << "Enter the fill character: ";
    cin >> fill;

    vector<string> result = solution.divideString(s, k, fill);

    cout << "Result: ";
    for (const string& str : result) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}