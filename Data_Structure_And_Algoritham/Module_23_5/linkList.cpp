// class Node{
//     public
//     int val;
//     Node*next;
//     Node(int val){
//         this->val=val;
//         this->next = NULL;
//     }
// };

// class MyLinkedList {
// public:
//     Node*head,*tail;
//     int c;
//     MyLinkedList() {
//         head=NULL;
//         tail=NULL;
//         c=0;
//     }

//     int get(int index) {
//         if(index>=c) return -1;
//         Node*tem=head;
//         for(int i=0;i<index;i++){
//             tem=tem->next;
//         }
//         return tem->val;

//     }

//     void addAtHead(int val) {
//         c++;
//         Node*n = new Node(val);
//         n->next=head;
//         head=n;
//     }

//     void addAtTail(int val) {
//         c++;
//         Node*n = new Node(val);
//         if(head==NULL){
//             head=n;
//             tail=n;
//             return;
//         }
//         tail->next=n;
//         tail=n;

//     }

//     void addAtIndex(int index, int val) {
//         c++;
//         Node*n=new Node(val);
//         if(index==0){
//             n->next=head;
//             head=n;
//         }
//         else if(index==c){
//             tail->next=n;
//             tail=n;
//         }
//         else{
//             Node*tem=head;
//             for (int i = 1; i < index; i++)
//             {
//                 tem = tem->next;
//             }
//             n->next = tem->next;
//             tem->next = n;
//         }

//     }

//     void deleteAtIndex(int index) {
//         if(index>=0 && index<c){
//             Node*tem=head;
//             for(int i=1;i<index;i++){
//                 tem=tem->next;
//             }
//             Node *d = tem->next;
//             tem->next = tem->next->next;
//             delete d;
//         }
//     }
// };

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> ls;
    // ls.push_back(1);
    // ls.push_back(2);
    // ls.push_back(3);
    // ls.push_back(4);

    // ls.push_front(0);

    // auto it = next(ls.begin(), 2);
    // cout << *it << endl;
    // for (auto it = ls.begin(); it != ls.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    list<int> l;
    l.push_front(1);
    l.push_back(3);
    l.insert(next(l.begin(), 1), 2);

    auto it = next(l.begin(), 1);
    cout << *it << endl;
    l.erase(next(l.begin(), 1));
    it = next(l.begin(), 1);
    cout << *it << endl;

    for (int val : l)
        cout << val << " ";
    return 0;
}