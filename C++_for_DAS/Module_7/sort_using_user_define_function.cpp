#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int mark;
};
int main(){
    Student a[5];
    for(int i=0;i<5;i++){
        cin>>a[i].name>>a[i].roll>>a[i].mark;
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(a[i].mark<a[j].mark){
                swap(a[i],a[j]);
            }
            if(a[i].mark==a[j].mark){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<5;i++) cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].mark<<endl;
    return 0;
}