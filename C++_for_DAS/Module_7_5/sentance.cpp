#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,x;
    getline(cin,s);
    // cin.ignore();
    // cin.ignore();
    cin>>x;
    int count=0;
    stringstream ss(s);
    while (ss>>s)
    {
        if(s==x) count++;
    }
    
    cout<<count;
    return 0;
}