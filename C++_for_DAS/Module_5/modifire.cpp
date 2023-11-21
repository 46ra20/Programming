#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abbae";
    s.push_back('A');
    
    // s.reserve();
    s.pop_back();
    s.append("HEllo");
    s.assign(10,'A');

    cout<<s<<endl;
    return 0;
}