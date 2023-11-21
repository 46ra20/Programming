#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int cls;
};
int main(){
    Student *rakib = new Student;
    Student *sakib = new Student;
    rakib->name="rakib";
    rakib->cls=10;
    *sakib=*rakib;
    delete rakib;
    cout<<sakib->name<<" "<<sakib->cls;
    
    return 0;
}