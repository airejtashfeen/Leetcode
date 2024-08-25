#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int>result;
        for(int i=1; i<mountain.size()-1; i++){
            if(mountain[i]>mountain[i-1] && mountain[i]>mountain[i+1]){
                result.push_back(i);
            }
        }
        return result;
    }
};

int main() {
    vector<int> mountain = {1, 2, 3, 4, 5, 4, 3, 2, 1};

    Solution solution;
    vector<int> peakIndices = solution.findPeaks(mountain);

    cout << "Peak indices: ";
    for (int index : peakIndices) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}