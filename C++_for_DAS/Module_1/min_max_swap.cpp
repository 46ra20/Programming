#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
int main(){
    int x=10,y=15;
    cout<<"min="<<min(x,y)<<endl;
    cout<<"max="<<max(x,y)<<endl;
    swap(x,y);
    cout<<"x="<<x<<" y="<<y;
    return 0;
}