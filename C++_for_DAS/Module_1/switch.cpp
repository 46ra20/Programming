#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    switch (x)
    {
    case 1:
        printf("%d ",x);
        break;
    
    default:
        printf("Nothing to print");
        break;
    }
    return 0;
}