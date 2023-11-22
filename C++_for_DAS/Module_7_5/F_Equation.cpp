#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,ans=0;
    cin>>a>>b;
    for(int i=2;i<=b;i+=2){
        long long int tem=1;
        for(int j=0;j<i;j++) tem*=a;
        ans+=tem;
    }
    cout<<ans;
    return 0;
}