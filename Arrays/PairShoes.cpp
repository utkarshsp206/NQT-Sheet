#include<bits/stdc++.h>
using namespace std;

int getNumberofPairs(string input){
    stringstream ss(input);
    vector<string> strings;
    string str;
    while(getline(ss,str,' ')){
        strings.push_back(str);
    }
    unordered_map<string,int> mpp;
    for(auto it: strings){
        mpp[it]++;
    }
    int count=0;

    for(auto it: mpp){
        string key = it.first;
        int val = it.second;
        string opposite;
        if(key[key.size()-1]=='L') opposite=key.substr(0,key.size()-1)+'R';
        else opposite=key.substr(0,key.size()-1)+'L';

        cout<<opposite<<" ";

        if(mpp.find(opposite)!=mpp.end()){
            int oppVal = mpp[opposite];
            count=count+min(val,oppVal);
            mpp[opposite]=0;
            mpp[key]=0;
        }
        
    }
    return count;
   
}
 
int main() {
string input = "7R 7R 7L 8R 7L 8L 6R 6L";
int numberofPairs = getNumberofPairs(input);
cout<<numberofPairs;

return 0;
}