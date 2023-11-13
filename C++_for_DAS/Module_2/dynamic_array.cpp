#include<iostream>
using namespace std;
int * fun(){
    int * a = new int[10];
    return a;
}
int main(){
    int * a = fun();
    for(int i=0;i<10;i++) cin>>a[i];
    for(int i=0;i<10;i++) cout<<a[i]<<endl;
    return 0;
}