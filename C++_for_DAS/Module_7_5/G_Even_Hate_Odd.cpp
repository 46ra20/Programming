#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,even=0,odd=0,flag=1;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        if(n%2==0){
            for(int i=0;i<n;i++){
                if(arr[i]%2==0) even++;
                else odd++;
            }
        }

        // cout<<even<<" "<<odd<<endl;

        else flag=0;
        if(flag){
            if(odd==even) cout<<0<<endl;
            else even<odd?cout<<(n/2)-even<<endl:cout<<(n/2)-odd<<endl;
        }
        else cout<<"-1"<<endl;

    }
    return 0;
}