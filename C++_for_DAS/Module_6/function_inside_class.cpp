#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int cls;
    int roll;
    int mark1;
    int mark2;
    Student(string name,int cls,int roll,int mark1,int mark2){
        this->name=name;
        this->cls=cls;
        this->roll=roll;
        this->mark1=mark1;
        this->mark2=mark2;

    }
    int fun_inside_class(){
        return mark1+mark2;
    }
};
int main(){
    Student * rakib = new Student("rakib",13,280254,80,80);
    cout<<rakib->fun_inside_class()<<endl;
    cout<<rakib->cls<<endl;
    return 0;
}