#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100005];
    while(cin.getline(s,100005)){
        sort(s,s+strlen(s));
        int n=strlen(s);
        for(int i=0;i<n;i++){
            if(s[i]==' ') continue;
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char s[100005];
//     while((cin.getline(s,100005)) != EOF){

//     }
//     return 0;
// }