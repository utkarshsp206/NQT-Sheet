#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cout<<"Enter the Input: ";
    cin>>n;

    stringstream ss;
    ss<<n; //Put value in ss

    //Take value from ss
    int num;
    ss>>num;

    cout<<n<<" "<<num;
    return 0;
}