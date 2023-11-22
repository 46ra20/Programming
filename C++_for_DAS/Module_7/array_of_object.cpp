#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int makr;
};
int main(){
    Student a[5];
    for(int i=0;i<5;i++){
        cin.ignore();
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].makr;
    }
    for(int i=0;i<5;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].makr<<endl;
    }
    return 0;
}