#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int mark;
};
bool fun(Student a,Student b){
    if(a.mark==b.mark) return a.roll<b.roll;
    else return a.mark>b.mark;
}
int main(){
    Student a[5];
    for(int i=0;i<5;i++) cin>>a[i].name>>a[i].roll>>a[i].mark;
    sort(a,a+5,fun);
    for(int i=0;i<5;i++) cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].mark<<endl;

    return 0;
}