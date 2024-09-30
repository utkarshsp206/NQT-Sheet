#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={3,1,5,8,3};
    int min = arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Minimum is: "<<min;
}