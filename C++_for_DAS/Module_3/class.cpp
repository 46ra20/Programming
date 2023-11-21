#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    double cgp;
};
int main(){
    Student a;
    cin>>a.name>>a.roll>>a.cgp;
    cout<<a.name<<" "<<a.roll<<" "<<a.cgp;
    return 0;
}