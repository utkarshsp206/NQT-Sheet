#include<bits/stdc++.h>
using namespace std;

void ColorSort(vector<int> &colors){
    unordered_map<int,int> mpp;
    for(auto it: colors){
        mpp[it]++;
    }
    int i=0;

    cout<<mpp[3]<<" "<<mpp[6]<<" "<<mpp[7]<<endl;
    for(i=0;i<mpp[3];i++){
        colors[i]=3;
    }
    for(i=mpp[3];i<mpp[3]+mpp[6];i++){
        colors[i]=6;
    }
    for(i=mpp[6]+mpp[3];i<mpp[3]+mpp[6]+mpp[7];i++){
        colors[i]=7;
    }
}

//!Without using extra space
 
int main() {
vector<int> colors = {3,6,3,7,6,3,7};
ColorSort(colors);
for(auto it: colors){
    cout<<it<<" ";
}

return 0;
}