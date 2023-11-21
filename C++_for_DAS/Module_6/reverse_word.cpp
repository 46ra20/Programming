#include<bits/stdc++.h>
using namespace std;
void fun(stringstream & ss){
    string n;
    if(ss>>n){
        fun(ss);
        cout<<n<<endl;
    }
}
int main(){
    string s ="Hello world How are you";
    stringstream ss(s);
    string n;
    // while(ss>>n){
    //     cout<<n<<endl;
    // }
    fun(ss);
    return 0;
}