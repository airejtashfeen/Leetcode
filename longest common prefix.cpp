#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n= strs.size();
        int minimum=10000;
        if(n==0){
            return "";
        }
        if(n==1){
            return strs[0];
        }
        for(int i=0; i<strs.size(); i++){
            int Size= strs[i].size();
            if(Size< minimum){
                minimum= Size;
            }
        }
        string res="";
        for(int i=0; i<minimum;i++){
            char c= strs[0][i];
            for(int j=1; j<strs.size(); j++){
                if(c!=strs[j][i]){
                    return res;
                }
            }
            res+=c;
        }
        return res;
    }
};
int main(){
Solution s;
vector<string>strings;
string ans;
int opt;
cout<<"how many strings do u have?";
cin>>opt;
for(int i=0; i<opt; i++){
    string str;
    cin>>str;
    strings.push_back(str);
}
ans=s.longestCommonPrefix(strings);
cout<<"The longest common prefix is: "<< ans<< endl;
}
