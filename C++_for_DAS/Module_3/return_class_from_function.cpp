#include<bits/stdc++.h>
using namespace std;
class Employ{
    public:
    int id;
    int salary;
    int month;
    Employ(int id,int salary,int month){
        this->id=id;
        this->salary=salary;
        this->month=month;
    }
};
Employ* fun(){
    Employ *bhuiyan = new Employ(157,10800,10);////why static memory can't return value perfectly because of that memory loss data accept actual value
    Employ *p = bhuiyan;
    return p;
}
int main(){
    Employ* ans = fun();
    // int i = ans;
    // cout<<ans->id<<" "<<ans->salary<<" "<<ans->month<<endl;
    cout<<ans;
    printf(" %d",ans);
    return 0;
}