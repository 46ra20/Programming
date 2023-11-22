#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
	string name;
	int roll;
	int marks;
};
bool fun(Student a,Student b){
    if(a.marks==b.marks) return a.roll<b.roll;
    else return a.marks>b.marks;
}
int main(){
    int t;
    cin>>t;
    Student a[t];
    for(int i=0;i<t;i++){
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    sort(a,a+t,fun);
    for(int i=0;i<t;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}