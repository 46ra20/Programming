#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int i=0,j=n-1,flag=1;
    while(i<j){
        if(arr[i] != arr[j]){
            flag =0;
            break;
        }
        i++;
        j--;
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}