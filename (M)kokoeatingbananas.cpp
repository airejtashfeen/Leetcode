#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

class Solution {
private:
int findMax(vector<int>&piles){
    int maxi= INT_MIN;
    for(int i=0; i<piles.size(); i++){
        maxi= max(maxi, piles[i]);
    }
    return maxi;
}

long long calculateHours(vector<int> &piles, int mid){
    long long totalHours=0; int n= piles.size();
    for(int i=0; i<n; i++){
        totalHours+= ceil((double) piles[i]/ (double) mid);
    }
    return totalHours;
}
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low= 1; int high= findMax(piles);
        long long totalHours;

        while(low<=high){
            int mid= low + (high-low)/2;
            totalHours= calculateHours(piles, mid);
            if(totalHours<=h){
                high=mid-1;
            }
            else{
                low= mid+1;
            }
        }
        return low;
    }
};

int main() {
    Solution solution;
    vector<int> piles = {805306368, 805306368, 805306368}; // Example test case
    int h = 1000000000;
    int result = solution.minEatingSpeed(piles, h);
    cout << "The minimum eating speed is: " << result << endl;
    return 0;
}
