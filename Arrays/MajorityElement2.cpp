#include<bits/stdc++.h>
using namespace std;

int getMajority(vector<int> &arr){
    unordered_map<int,int> mpp;
    for(auto it: arr){
        mpp[it]++;
    }
    int max=arr.size()/3;
    for(auto it: mpp){
        if(it.second>max) return it.first;
    }
    return -1;
}
 
int main() {
vector<int> arr = {2,2,1,0,2,2,2,2,1};
int majorityElement = getMajority(arr);
cout<<majorityElement;

return 0;
}