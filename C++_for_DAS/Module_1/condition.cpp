#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    // if(x>5) cout<<"x>5";
    // else cout<<"x<5";
    string s= (x>5)?"hello":"x<5";
    cout<<string((x>5)?"hello":"x<5");
    return 0;
}