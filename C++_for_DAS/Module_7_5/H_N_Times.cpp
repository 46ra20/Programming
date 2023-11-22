#include<bits/stdc++.h>
using namespace std;
void fun(int n,char c){
    if(n==0) return;
    cout<<c;
    if(n!=1) cout<<" ";
    fun(n-1,c);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n;
        cin.ignore();
        cin>>c;
        fun(n,c);
        cout<<endl;
    }
    return 0;
}