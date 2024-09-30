#include<bits/stdc++.h>
using namespace std;
 
int main() {
vector<int> i;
vector<float> f;
vector<string> s;
string str="12.23,Hello,123;23.3,Hi,342;";
stringstream input_stream(str);
string output_stream;
while(getline(input_stream,output_stream,';')){  //* FROM - TO - SEPARATED BY
    stringstream ss(output_stream);

    string fo;
    getline(ss,fo,',');
    f.push_back(stof(fo));

    string so;
    getline(ss,so,',');
    s.push_back(so);

    string ino;
    getline(ss,ino,',');
    i.push_back(stoi(ino));
}

for(auto it: s) cout<<it<<" ";
cout<<endl;

for(auto it: f) cout<<it<<" ";
cout<<endl;

for(auto it: i) cout<<it<<" ";
cout<<endl;

return 0;
}