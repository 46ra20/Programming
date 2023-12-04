#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next = NULL;
    // Node(){}
    // Node(int val){
    //     this->val=val;
    //     this->next=NULL;
    // }
};
int main()
{
    Node a;
    a.val = 20;
    cout << a.next << endl;
    if (a.next == NULL)
        cout << "Hello";
    return 0;
}