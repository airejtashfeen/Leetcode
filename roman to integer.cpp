#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:

int romanToInt(string s) {
int num=0;

for(int i=0; i<s.size(); i++){
if(s[i]=='I'){
   num+=1;
}
else if(s[i]=='V'){
   num+=5;
}
else if(s[i]=='X'){
    num+=10;
}

else if(s[i]=='L'){
    num+=50;
}

else if(s[i]=='C'){
    num+=100;
}

else if(s[i]=='D'){
    num+=500;
}

else if(s[i]=='M'){
    num+=1000;
}

if(s[i]=='I' && s[i+1]=='V'){
   num=num-2;
}
if(s[i]=='I' && s[i+1]=='X'){
   num=num-2;
}
if(s[i]=='X' && s[i+1]=='L'){
   num=num-20;
}
if(s[i]=='X' && s[i+1]=='C'){
   num=num-20;
}

if(s[i]=='C' && s[i+1]=='D'){
   num=num-200;
}
if(s[i]=='C' && s[i+1]=='M'){
   num=num-200;
}
}
return num;
}
};

int main(){
Solution sol;
string s;
int ans;
cout<<"Enter the string to convert it into a roman number:";
cin>>s;
ans=sol.romanToInt(s);
cout<<"\nThe number in integers is: "<<ans<< endl;
}
