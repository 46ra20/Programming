#include<bits/stdc++.h>// O(NlogN) ==> 10^5 steps in 1s
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j=i;
        while(j>0){
            cout<<j%10<<" ";
            j/=10;
        }
        cout<<endl;
    }
    return 0;
}