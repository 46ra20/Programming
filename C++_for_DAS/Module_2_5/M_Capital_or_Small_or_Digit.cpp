// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char c;
//     cin>>c;
//     if(isupper(c)) cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
//     else if(islower(c)) cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
//     else cout<<"IS DIGIT"<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(isdigit(c)) cout<<"IS DIGIT";
    else{
        cout<<"ALPHA"<<endl;
        if(isupper(c)) cout<<"IS CAPITAL"<<endl;
        else cout<<"IS SMALL"<<endl;
    }
    return 0;
}