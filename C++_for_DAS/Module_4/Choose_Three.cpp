#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,flag=0;
        cin>>n>>s;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(a[i]+a[j]+a[k]==s){
                        flag=1;
                    }
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// bool isPossibleSum(int arr[], int n, int S) {
//     for (int i = 0; i < n - 1; ++i) {
//         unordered_set<int> seen;
//         int currentSum = S - arr[i];
        
//         for (int j = i + 1; j < n; ++j) {
//             if (seen.find(currentSum - arr[j]) != seen.end()) {
//                 return true; // Found three elements whose sum is S
//             }
//             seen.insert(arr[j]);
//         }
//     }
//     return false; // No such combination found
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,s;
//         cin>>n>>s;
//         int a[n];
//         for(int i=0;i<n;i++) cin>>a[i];
//         bool x = isPossibleSum(a,n,s);
//         if(x) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }
//     return 0;
// }