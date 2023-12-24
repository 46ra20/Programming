// /****************************************************************

//     Following is the class structure of the Node class:

//         class Node
//         {
//         public:
//             int data;
//             Node *next;
//             Node()
//             {
//                 this->data = 0;
//                 next = NULL;
//             }
//             Node(int data)
//             {
//                 this->data = data;
//                 this->next = NULL;
//             }
//             Node(int data, Node* next)
//             {
//                 this->data = data;
//                 this->next = next;
//             }
//         };

// *****************************************************************/

// class Stack
// {
//     //Write your code here

// public:
//     Stack()
//     {
//         //Write your code here
//     }
//     int sz=0;
//     void insert_node(Node*&head,Node*&tail,int x){
//         sz++;
//         Node*n=new Node(x);
//         if(head==NULL){
//             head=n;
//             tail=n;
//             return;
//         }
//         tail->next=n;
//         tail=n;
//     }

//     int getSize()
//     {
//         //Write your code here
//         return sz;
//     }

//     bool isEmpty()
//     {
//         //Write your code here
//         return sz!=0;
//     }

//     void push(int data)
//     {
//         //Write your code here
//         insert_node(head, tail, data);
//     }

//     void pop()
//     {
//         //Write your code here
//         Node*tem=head;
//         while(tem->next!=NULL){
//             tem=tem->next;
//         }
//     }

//     int getTop()
//     {
//         //Write your code here
//         return tail->data;
//     }
// };

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node() {}
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_node(Node *&head, int data)
{
    Node *n = new Node(data);
    if (head == NULL)
    {
        head = n;
        return;
    }
    n->next = head;
    head = n;
    return;
}
int sz(Node *tem)
{
    int count = 0;
    while (tem)
    {
        count++;
        tem = tem->next;
    }
    return count;
}
bool empty(Node *e)
{
    return e;
}
void remove_top(Node *&h)
{
    if (h == NULL)
        return;
    Node *tem = h;
    h = h->next;
    delete tem;
}
int print_top(Node *t)
{
    if (t == NULL)
        return -1;
    return t->val;
}
int main()
{
    Node *head = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            cout << sz(head) << endl;
        }
        else if (x == 2)
        {
            cout << empty(head) << endl;
        }
        else if (x == 3)
        {
            int x;
            cin >> x;
            insert_node(head, x);
        }
        else if (x == 4)
        {
            remove_top(head);
        }
        else if (x == 5)
        {
            int x = print_top(head);
            cout << x << endl;
        }
    }
    return 0;
}