#include <bits/stdc++.h>
using namespace std;
int count = 0;
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

void insertElement(Node *&head)
{
    int x;
    cout << "Enter valude:-";
    cin >> x;
    Node *newNode = new Node(x);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tem = head;
    while (tem != NULL)
    {
        tem = tem->next;
    }
    tem->next = newNode;
}

void printNode(Node *head)
{
    Node *tem = head;
    cout << "Your Element is:- ";
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    while (1)
    {
        int x;
        cout << "------------Option------------" << endl;
        cout << "0 For Exit." << endl
             << "1 For Insert." << endl
             << "2 For Print." << endl
             << "3 For Delete." << endl;
        cout << endl
             << "Select an option:-";
        cin >> x;
        cout << endl;
        if (x == 0)
            break;
        else if (x == 1)
        {
            insertElement(head);
        }
        else if (x == 2)
        {
            printNode(head);
        }
    }

    return 0;
}