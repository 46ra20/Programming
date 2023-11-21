#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int min = INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(min>(arr[i]+arr[j]+j-i)){
                    min = arr[i]+arr[j]+j-i; 
                }
            }
        }
        cout<<min<<endl;
    }
    return 0;
}