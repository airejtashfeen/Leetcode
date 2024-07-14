#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size() ) return false;

        unordered_map<int,char>hashMap1;
        unordered_map<int,char>hashMap2;

        for(int i=0; i<s.size(); i++){
            char charS= s[i];
            char charT= t[i];
            if(hashMap1.find(charS)!= hashMap1.end() && hashMap1[charS]!= charT || hashMap2.find(charT)!= hashMap2.end() && hashMap2[charT]!= charS ){
                return false;
            }
            hashMap1[charS]= charT;
            hashMap2[charT]= charS;
        }
        return true;
    }
};

int main() {
    Solution sol;

    // Test cases
    string s1 = "egg", t1 = "add";
    cout << "Isomorphic for s1 and t1: " << sol.isIsomorphic(s1, t1) << endl;

    string s2 = "foo", t2 = "bar";
    cout << "Isomorphic for s2 and t2: " << sol.isIsomorphic(s2, t2) << endl;

    string s3 = "paper", t3 = "title";
    cout << "Isomorphic for s3 and t3: " << sol.isIsomorphic(s3, t3) << endl;

    return 0;
}
