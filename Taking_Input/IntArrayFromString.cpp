#include<bits/stdc++.h>
using namespace std;

//! Given Input:  "[1,2,3,4,5,6,7]"
//* To store in a vector of integers
//1. Remove []
//2. Split  by ','
//3. Convert to int and store in vector
 
int main() {
string input="[1,2,3,4,5,6,7]";
remove(input.begin(),input.end(),'[');
remove(input.begin(),input.end(),']');

vector<int> result;

stringstream ss(input);
string str;
while(getline(ss,str,',')){
    result.push_back(stoi(str));
}

for(auto it: result){
    cout<<it<<" ";
}

return 0;
}