// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     int count=0;
//     getline(cin,s);
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='?' || s[i]==';' || s[i]== '!' || s[i]=='.'){
//                 s[i]=' ';
//         }
//     }
//     // cout<<s;
//     stringstream ss(s);
//     while(ss>>s){
//         count++;
//     }
//     cout<<count<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     // char c;
//     int count=0;
//     bool x = false; 
//     getline(cin,s);
//     for(char c:s){
//         if(isalpha(c)){
//             if(x==false){
//                 count++;
//                 x=true;
//             }
//         }
//         else x=false;
//     }
//     cout<<count<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])==0) s[i]=' ';
    }
    stringstream ss(s);
    int count=0;
    while(ss>>s){
        count++;
    }
    cout<<count<<endl;
    return 0;
}