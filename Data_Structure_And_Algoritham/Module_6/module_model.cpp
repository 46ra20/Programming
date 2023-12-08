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
void insertElement(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tem = head;
    while (tem->next != NULL)
    {
        tem = tem->next;
    }
    tem->next = newNode;
}
void printElement(Node *head)
{
    Node *tem = head;
    cout << endl
         << "Your Element is:- ";
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    cout << endl
         << endl;
    return;
}

int main()
{
    Node *head = NULL;
    while (1)
    {
        cout << "----------------Option----------------" << endl;
        cout << "Select 0: For Exit" << endl;
        cout << "Select 1: For Insert" << endl;
        cout << "Select 2: For Print" << endl;
        int x;
        cout << "Select an option:-";
        cin >> x;
        if (x == 0)
            break;
        else if (x == 1)
        {
            int a;
            cout << "Enter value:-";
            cin >> a;
            cout << endl;
            insertElement(head, a);
        }
        else if (x == 2)
        {
            printElement(head);
        }
    }
    return 0;
}