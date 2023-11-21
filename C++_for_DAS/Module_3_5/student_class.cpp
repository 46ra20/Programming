#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    int math_mark;
    int cls;
    Student(char name[100],int roll, int math_mark,int cls){
        strcpy(this->name, name);
        this->roll= roll;
        this->math_mark= math_mark;
        this->cls=cls;
    }
};
int main(){
    char ch[100]="Rakib";
    Student rakib(ch,03,190,9);
    char bh[100] ="bhuiyan";
    Student bhuiyan(bh,03,90,9);
    char si[20]="siyam";
    Student siyam(ch,03,85,9);

    if(rakib.math_mark>bhuiyan.math_mark && rakib.math_mark>siyam.math_mark) cout<<rakib.name;
    else if(rakib.math_mark<bhuiyan.math_mark && bhuiyan.math_mark>siyam.math_mark) cout<<bhuiyan.name;
    else cout<<siyam.name;
    
    
    return 0;
}