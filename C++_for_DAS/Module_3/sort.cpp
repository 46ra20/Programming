#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
};
int main(){
    int arr[8] = {3,5,2,7,5,4,3,7};
    sort(arr,arr+8,greater<int>());
    // Student rakib;
    // printf("%d",sizeof(rakib));
    for(int i=0;i<8;i++) cout<<arr[i]<<" ";
    return 0;
}