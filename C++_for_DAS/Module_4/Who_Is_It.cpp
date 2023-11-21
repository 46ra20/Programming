#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    char name[100];
    char sec;
    int total_mark;
    // Student(int id,char name[100],char sec,int total_mark){
    //     this->id=id;
    //     strcpy(this->name,name);
    //     this->sec=sec;
    //     this->total_mark=total_mark;
    // }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        Student *sakib=new Student;
        cin>>sakib->id>>sakib->name>>sakib->sec>>sakib->total_mark;
        Student *rakib=new Student;
        cin>>rakib->id>>rakib->name>>rakib->sec>>rakib->total_mark;
        Student *akib=new Student;
        cin>>akib->id>>akib->name>>akib->sec>>akib->total_mark;

        // cout<<sakib->id<<" "<<sakib->name<<" "<<sakib->sec<<" "<<sakib->total_mark<<endl;
        // cout<<rakib->id<<" "<<rakib->name<<" "<<rakib->sec<<" "<<rakib->total_mark<<endl;
        // cout<<akib->id<<" "<<akib->name<<" "<<akib->sec<<" "<<akib->total_mark<<endl;
        // cout<<endl<<endl;

        if(sakib->total_mark >= rakib->total_mark && sakib->total_mark>= akib->total_mark){
            if(sakib->total_mark==rakib->total_mark)
            {
                if(sakib->id < rakib->id) cout<<sakib->id<<" "<<sakib->name<<" "<<sakib->sec<<" "<<sakib->total_mark<<endl;
                else cout<<rakib->id<<" "<<rakib->name<<" "<<rakib->sec<<" "<<rakib->total_mark<<endl;

            }
            else if(sakib->total_mark==akib->total_mark)
            {
                if(sakib->id < akib->id) cout<<sakib->id<<" "<<sakib->name<<" "<<sakib->sec<<" "<<sakib->total_mark<<endl;
                else cout<<akib->id<<" "<<akib->name<<" "<<akib->sec<<" "<<akib->total_mark<<endl;

            }
            else{
                cout<<sakib->id<<" "<<sakib->name<<" "<<sakib->sec<<" "<<sakib->total_mark<<endl;
            }
        }
        else if(sakib->total_mark <= rakib->total_mark && rakib->total_mark>= akib->total_mark){
            if(sakib->total_mark==rakib->total_mark)
            {
                if(sakib->id < rakib->id) cout<<sakib->id<<" "<<sakib->name<<" "<<sakib->sec<<" "<<sakib->total_mark<<endl;
                else cout<<rakib->id<<" "<<rakib->name<<" "<<rakib->sec<<" "<<rakib->total_mark<<endl;

            }
            else if(rakib->total_mark==akib->total_mark)
            {
                if(rakib->id < akib->id) cout<<rakib->id<<" "<<rakib->name<<" "<<rakib->sec<<" "<<rakib->total_mark<<endl;
                else cout<<akib->id<<" "<<akib->name<<" "<<akib->sec<<" "<<akib->total_mark<<endl;

            }
            else{
                cout<<rakib->id<<" "<<rakib->name<<" "<<rakib->sec<<" "<<rakib->total_mark<<endl;
            }
        }
        else{
            cout<<akib->id<<" "<<akib->name<<" "<<akib->sec<<" "<<akib->total_mark<<endl;
        }

    }
    return 0;
}