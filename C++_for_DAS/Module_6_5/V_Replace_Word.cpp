#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int x =s.find("EGYPT");
    while(x!=-1){
        s.replace(x,5," ");
        x=s.find("EGYPT");
    }
    cout<<s;

    return 0;
}