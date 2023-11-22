#include<bits/stdc++.h>
using namespace std;
class Counting_Array{
    public:
    char al;
    int value;
};
bool fun(Counting_Array a,Counting_Array b){
    if(a.value==b.value){
        return a.al<b.al;
    }
    else return a.value>b.value;
}
int main(){
    string s;
    Counting_Array * arr = new Counting_Array[26];
    for(int i=0;i<26;i++){
        arr[i].al=char(i+'a');
        arr[i].value=0;
    }
    cin>>s;
    for(char c:s){
        arr[int(c-97)].value++;
    }
    sort(arr,arr+26,fun);
    for(int i=0;i<26;i++){
        if(arr[i].value>0){
            while(arr[i].value--) cout<<arr[i].al;
        }
        cout<<endl;
    }
    return 0;
}