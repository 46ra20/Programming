// #include<bits/stdc++.h>
// using namespace std;
// int* get_arr(int y){
//     int arr[]={1,2,3,4,5};
//     for(int i=0;i<y;i++) cin>>arr[i];
//     return arr;
// }
// int main(){
//     int n;
//     cin>>n;
//     int *x = get_arr(n);
//     cout<<x;
//     // for(int i=0;i<n;i++) cout<<x[i]<<" ";
//     return 0;
// }



/////wright answer

// #include<bits/stdc++.h>
// using namespace std;

// int * get_arr(int n){
//     int * arr= new int[n];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     int *x = arr;
//     return x;
// }
// int main(){
//     int n;
//     cin>>n;
//     int *x = get_arr(n);

//     for(int i=0;i<n;i++) cout<<*(x+i)<<" ";
//     return 0;
// }





// #include<iostream>
// using namespace std;

// int* demo(int n) //return type- address of integer array
// {
//     int x = n;

// 	int a[x]; //array declared as static
// 	for(int i = 0; i<x; i++)
// 	{
// 		a[i] = i; //array initialisation
// 	}

// 	return a; //address of a returned
// }

// int main()
// {
//     int n;
//     cin>>n;
// 	int* ptr; //pointer to hold address
// 	int i;
// 	ptr = demo(n); //address of a
// 	for(i=0 ; i<n; i++)
// 		cout<<ptr[i]<<" "; //ptr[i] is equivalent to *(ptr+i)
		
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int* get_arr(int n){
    int *arr= new int[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int *x = arr;
    return x;
}


int main(){
    int n;
    cin>>n;
    int *x = get_arr(n);
    // cout<<*(x+2);
    for(int i=0;i<n;i++) cout<<x[i]<<" ";
    return 0;
}

