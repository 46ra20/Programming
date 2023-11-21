#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    char op,eq;
    long long int c,ans;
    cin>>a>> op>>b>> eq>>c;
    if(op=='+'){
        ans = a+b;
        if(ans==c) cout<<"Yes";
        else cout<<ans;
    }
    if(op=='-'){
        ans = a-b;
        if(ans==c) cout<<"Yes";
        else cout<<ans;
    }
    if(op=='*'){
        ans = a*b;
        if(ans==c) cout<<"Yes";
        else cout<<ans;
    }
    return 0;
}