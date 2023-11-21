// #include<bits/stdc++.h>
// using namespace std;
// void fun(stringstream & ss){
//     string s;
//     if(ss>>s){
//         for(int i=s.size()-1;i>=0;i++) cout<<s[i];
//         fun(ss);
//     }
// }
// int main(){
//     string s,tem;
//     int sum=0;
//     getline(cin,s);
//     tem=s;
//     stringstream ss(tem);
//     fun(ss);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void fun(stringstream & ss){
    string s;
    if(ss>>s){
        for(int i=s.size()-1;i>=0;i--) cout<<s[i];
        if(ss.eof() != 1) cout<<" ";
        fun(ss);
    }


}
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    fun(ss);
    return 0;
}