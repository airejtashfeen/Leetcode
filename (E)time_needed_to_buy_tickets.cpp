#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;

        while(true) {
            if(tickets[k] == 0) break;

            for(int i = 0; i < tickets.size(); i++) {
                if(tickets[k] == 0) break;

                if(tickets[i] > 0) {
                    tickets[i]--;
                    time++;
                }
            }
        }
        return time;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> tickets = {2, 3, 2};
    int k = 2;

    int result = sol.timeRequiredToBuy(tickets, k);

    cout << "Time required to buy tickets: " << result << " seconds" << endl;

    return 0;
}
