#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;
int main(){
    ifstream is("get_input.cpp");
    char c;
    while(is.eof()){
        is.get(c);
        cout<<c<<" ";
    }
    return 0;
}