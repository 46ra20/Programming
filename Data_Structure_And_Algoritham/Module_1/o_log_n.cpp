#include<bits/stdc++.h>// O(logN) ==> 10^18 steps in 1s
using namespace std;
int main(){
    long long int n,ans=0,i=1;
    cin>>n;
    while(n>0){
        int digit = n % 10;
        cout<<digit;
        n/=10;
    }
    cout<<ans<<endl;
    return 0;
}