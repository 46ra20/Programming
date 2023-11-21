#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    double gpa;
    Student(char name[100],int roll,double gpa)
    {
        strcpy(this->name,name);
        this->roll=roll;
        (*this).gpa=gpa;
    }
};
int main(){
    char tem[100]="rakib";
    Student rakib(tem,260,4.6);
    cout<<rakib.name<<" "<<rakib.roll<<" "<<rakib.gpa;
    return 0;
}