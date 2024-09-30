#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &arr){
    int count = 0,majority;
    for(int i=0;i<arr.size();i++){
        if(count==0){
            majority = arr[i];
            count=1;
        }
        else if(arr[i]==majority) count++;
        else count--;
    }
    return majority;
}
 
int main() {
vector<int> arr = {2,2,2,1,1,1,2,2};
int majorityElem = majorityElement(arr);
cout<<majorityElem;

return 0;
}