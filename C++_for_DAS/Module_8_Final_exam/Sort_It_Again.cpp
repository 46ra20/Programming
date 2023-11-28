#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_mark;
    int eng_mark;
};
bool fun(Student a,Student b){
    if(a.eng_mark==b.eng_mark && a.math_mark==b.math_mark) return a.id<b.id;
    else if(a.eng_mark==b.eng_mark) return a.math_mark>b.math_mark;
    else return a.eng_mark>b.eng_mark;
}
int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_mark>>a[i].eng_mark;
    }

    sort(a,a+n,fun);

    for(int i=0;i<n;i++){
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_mark<<" "<<a[i].eng_mark<<endl;
    }
    return 0;
}