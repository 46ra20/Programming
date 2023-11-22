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
    Student min;
    min.mark=INT_MAX;
    for(int i=0;i<5;i++){
        if(min.mark>a[i].mark){
            min=a[i];
        }
        if(min.mark==a[i].mark){
            swap(min,a[i]);
        }
    }
    Student max;
    max.mark=INT_MIN;
    for(int i=0;i<5;i++){
        if(max.mark<a[i].mark){
            max=a[i];
        }
    }
    cout<<min.name<<" "<<min.roll<<" "<<min.mark<<endl;
    cout<<max.name<<" "<<max.roll<<" "<<max.mark<<endl;
    return 0;
}