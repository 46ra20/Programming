// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     char ch;
//     cin>>a>> ch>>b;
//     if(ch='>' && a>b) cout<<"Right"<<endl;
//     else if(a<b && ch=='<') cout<<"Right"<<endl;
//     else if(ch='=' && a==b) cout<<"Right"<<endl;
//     else cout<<"Wrong"<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    char ch;
    cin>>a>> ch>>b;
    if(ch=='>' && a>b) cout<<"Right"<<endl;
    else if(ch=='<' && a<b) cout<<"Right"<<endl;
    else if(ch=='=' && a==b) cout<<"Right"<<endl;
    else cout<<"Wrong"<<endl;
    return 0;
}