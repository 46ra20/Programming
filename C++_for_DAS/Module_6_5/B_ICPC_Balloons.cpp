#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,list[26]={0},sum=0;
        cin>>n;
        char ch[n];
        for(int i=0;i<n;i++){
            cin>>ch[i];
            int x = ch[i]-'A';
            if(list[x]==0){
                list[x]+=2;
            }
            else list[x]+=1;
        }
        for(int i=0;i<26;i++) sum+=list[i];
        cout<<sum<<endl;
    }
    return 0;
}