#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), greater<int>());

        int n = citations.size();
        for (int i = 0; i < n; ++i) {

            if (citations[i] <= i) {
                return i;
            }
        }
        return n; 
    }
};

int main() {
    Solution sol;
    vector<int> citations = {6, 5, 3, 1, 0};
    int result = sol.hIndex(citations);
    cout << "The H-Index is: " << result << endl;
    return 0;
}
