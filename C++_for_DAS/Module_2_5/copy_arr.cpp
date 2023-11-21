#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int * n_arr = new int[n];
    for(int i=0;i<n;i++) cin>>n_arr[i];
    // for(int i=0;i<n;i++) cout<<n_arr[i]<<" ";

    int m;
    cin>>m;
    int * m_arr= new int[m];
    for(int i=0;i<n;i++) m_arr[i] = n_arr[i];
    delete[] n_arr;

    for(int i=n;i<m;i++) cin>>m_arr[i];

    for(int i=0;i<m;i++) cout<<m_arr[i]<<" ";
    // for(int i=0;i<n;i++) cout<<n_arr[i]<<" ";
    return 0;
}