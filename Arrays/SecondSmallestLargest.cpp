#include<bits/stdc++.h>
using namespace std;
 
void secondSmallest() {
int arr[5]={3,1,5,8,3};
vector<int> arr1={3,1,1,1,3,5,8,3};
sort(arr1.begin(),arr1.end());
cout<<"Second Minimum: "<<arr1[1]<<endl;
cout<<"Second Largest: "<<arr1[arr1.size()-2]<<endl;

//! But if numbers are repeated - we can use set
set<int> st;
for(auto it: arr1){
    st.insert(it);
}

vector<int> temp;
for(auto it: st){
    temp.push_back(it);
}

sort(temp.begin(),temp.end());
cout<<"Second Minimum using set: "<<temp[1];
}

int secondSmallestOptimal(int arr[],int n){
    int small = INT_MAX;
    int second_small = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<small){
            second_small=small;
            small=arr[i];
        }
        else if(arr[i]<second_small && arr[i]!=small){
            second_small=arr[i];
        }
    }
    return second_small;
}

int secondLargestOptimal(int arr[], int n){
    int large = INT_MIN;
    int second_large = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            second_large=large;
            large = arr[i];
        }
        else if(arr[i]>second_large && arr[i]!=large){
            second_large=arr[i];
        }
    }
    return second_large;
}

int main(){
    int n = 9;
    int arr[9]={7,3,1,1,3,2,4,5,7};
    cout<<"Second Smallest is: "<<secondSmallestOptimal(arr,n)<<endl;
    cout<<"Second Largest: "<<secondLargestOptimal(arr,n);
}