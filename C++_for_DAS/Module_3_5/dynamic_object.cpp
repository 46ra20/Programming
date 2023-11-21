#include<bits/stdc++.h>
using namespace std;
class Cricketer{
    public:
    int jersey_no;
    char country_name[50];
};
int main(){
    Cricketer *dhoni=new Cricketer;
    dhoni->jersey_no=10;
    char c[50]="india";
    strcpy(dhoni->country_name,c);
    cout<<dhoni->country_name<<" "<<dhoni->jersey_no<<endl;


    Cricketer * kokhole = new Cricketer;
    // kokhole = dhoni;
    kokhole->jersey_no= dhoni->jersey_no;
    strcpy(kokhole->country_name,dhoni->country_name);
    delete dhoni;

    cout<<kokhole->country_name<<" "<<kokhole->jersey_no;
    return 0;
}