#include<bits/stdc++.h>
using namespace std;
namespace Student{
    class Nmae_Student{
        public:
        string name;
        int cls;
        Nmae_Student(string name,int cls){
            this->name=name;
            this->cls=cls;
        }
    };
    int fun(int x,int y){
        return x+y;
    }
}
using namespace Student;
int main(){
    cout<<Student::fun(6,50)<<endl;
    Nmae_Student*rakib=new Nmae_Student("Md Rakib Bhuiyan",15);
    // rakib->name="Md Rakib Bhuiyan";
    // rakib->cls=10;
    cout<<rakib->name<<" "<<endl<<rakib->cls<<endl;
    return 0;
}