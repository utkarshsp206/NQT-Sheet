#include<bits/stdc++.h>
using namespace std;

int findMaxDiff(vector<int> &arr){
    int smallest = arr[0];
    int largest = arr[0];
    int maxDiff = largest-smallest;
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest) {
            largest = arr[i];
            maxDiff=max(maxDiff,largest-smallest);
        }
        else if(arr[i]<smallest){
            smallest=arr[i];
            largest=arr[i];
        }
    }
    return maxDiff;
}
 
int main() {
vector<int> arr={-9,-2,1,6,11,8,-7};
cout<<findMaxDiff(arr);

return 0;
}