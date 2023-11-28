#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int x;
    getline(cin,s);
    stringstream ss(s);
    while(ss>>s){
        x = s.compare("Jessica");
        if(x==0) break;
    }
    x==0?cout<<"YES"<<endl:cout<<"NO"<<endl;
    return 0;
}