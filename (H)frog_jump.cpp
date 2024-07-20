#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {

   unordered_map<int,unordered_set<int>>memo;

   bool countJumps(int index, int lastJump, vector<int>&stones){
        if(index== stones.size()-1) return true;

        if(memo[index].count(lastJump)){
            return false;
        }

        memo[index].insert(lastJump);

        for(int i= index+1; i<stones.size(); i++ ){
            int distance= stones[i]- stones[index];

            if( distance>=lastJump-1 && distance<=lastJump+1){
                if(countJumps(i, distance, stones)){
                    return true;
                }
            }
        }

        return false;
   }

public:
    bool canCross(vector<int>& stones) {
         if(stones.empty() || stones[1]!=1) return false;

         return countJumps(0,0,stones);
    }
};

int main() {
    Solution sol;
    
    // Define a vector of stones for testing
    vector<int> stones = {0, 1, 3, 5, 6, 8, 12, 17};
    
    // Check if the frog can cross
    bool result = sol.canCross(stones);
    
    // Output the result
    cout << "Can the frog cross the river? " << (result ? "Yes" : "No") << endl;
    
    return 0;
}
