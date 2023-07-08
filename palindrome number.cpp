#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
    string str=to_string(x);
    reverse(str.begin(), str.end());
    int num;
    try{
    num=stoi(str);
    } catch(const std::out_of_range& e){
    return false;}
    if(num==x){
        return true;
    }
    else{
        return false;
    }
    }
};

int main(){
int num;
bool ans;
Solution s;
cout<<"Enter number to check whether it is a palindrome or not:";
cin>>num;
ans=s.isPalindrome(num);
cout<<boolalpha<<ans<<endl;
}
