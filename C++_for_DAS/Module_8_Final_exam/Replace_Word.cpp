#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,x;
        cin>>s>>x;
        int a = s.find(x);
        int b = x.size();
        while(a!=-1){
            cout<<a<<endl;
            s.replace(a,b,"#");
            a = s.find(x);
        }
        // cout<<s<<endl;
        
    }
    return 0;
}