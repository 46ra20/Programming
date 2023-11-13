#include<iostream>
using namespace std;
int * fun(){
    int * y = new int;
    cout<<y<<endl;
    return y;
}
int main(){
    int * x = fun();
    *x=1;
    cout<<*x;
    return 0;
}