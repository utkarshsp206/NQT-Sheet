#include<bits/stdc++.h>
using namespace std;

int getMaxEfficiency(vector<int> &arr){
    int negCount=0,posCount=0;
    for(auto it: arr){
        if(it<0) negCount++;
        else if(it>0) posCount++;
    }
    set<int> st;
    for(auto it: arr){
        st.insert(it);
    }

    vector<int> setArr;
    for(auto it: st){
        setArr.push_back(it);
    }

    sort(setArr.begin(),setArr.end());

    int smallest = setArr[0];
    int SecSmallest = setArr[1];
    int largest = setArr[setArr.size()-1];

    int maxEfficiency = smallest*SecSmallest*largest;
    maxEfficiency=max(maxEfficiency,setArr[setArr.size()-1,setArr.size()-2,setArr.size()-3]);
    maxEfficiency=max(maxEfficiency,setArr[0]*setArr[1]*setArr[2]);

    return maxEfficiency;
}
 
int main() {
vector<int> arr = {-1,-2,-8,-4};
cout<<getMaxEfficiency(arr);

return 0;
}