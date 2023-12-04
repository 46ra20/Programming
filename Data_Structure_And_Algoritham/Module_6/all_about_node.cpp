#include <bits/stdc++.h>

using namespace std;
int nodeCount = 0;
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
void insertNode(Node *&head, int val) // insert element at head and tail
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        cout << "Insert at head" << endl;
        nodeCount++;
        return;
    }
    Node *tem = head;
    while (tem->next != NULL)
    {
        tem = tem->next;
    }
    tem->next = newNode;
    cout << "Insert at tail" << endl;
    nodeCount++;
    return;
}
void insetAnyPosition(Node *&head, int val, int pos) // insert at any position
{
    Node *newNode = new Node(val);
    Node *tem = head;
    if (pos < 2 || pos > nodeCount)
    {
        cout << "Invalid position" << endl;
        return;
    }
    for (int i = 1; i < (pos - 1); i++)
    {
        tem = tem->next;
    }
    newNode->next = tem->next;
    tem->next = newNode;
    cout << endl
         << "Inserted successfully" << endl;
    nodeCount++;
    return;
}

void insertInHead(Node *&head, int val) // insert element at head
{
    Node *newNode = new Node(val);
    Node *tem = head;
    newNode->next = tem;
    head = newNode;
    nodeCount++;
    return;
}

void printNode(Node *head) // print node
{
    Node *tem = head;
    if (head == NULL)
    {
        cout << "No element here, please add an element";
        return;
    }
    cout << endl
         << "Your Data is:-";
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    cout << endl;
    return;
}

void deletNode(Node *&head, int pos) // delete node
{
    Node *tem = head;
    if (pos < 2 || pos > nodeCount)
    {
        cout << "Invalid position" << endl;
        return;
    }
    for (int i = 1; i < pos - 1; i++)
    {
        tem = tem->next;
    }
    Node *deleteN_Node = tem->next;
    tem->next = tem->next->next;
    delete deleteN_Node;
    cout << "Node Delete Successfully" << endl;
    nodeCount--;
    return;
}

void deleteHead(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    nodeCount--;
    return;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert Element::" << endl;
        cout << "Option 2: Add Element in Head::" << endl;
        cout << "Option 3: Insert at any position::" << endl;
        cout << "Option 4: Print Element::" << endl;
        cout << "Option 5: Delete Element::" << endl;
        cout << "Option 6: Delete Head::" << endl;
        cout << "Option 7: Exit::" << endl;

        cout << endl
             << "Enter Your Choice::-";
        int x;
        cin >> x;
        cout << endl;
        if (x == 1)
        {
            int val;
            cout << "Enter your valu to add in a node:-" << endl;
            cin >> val;
            insertNode(head, val);
        }
        else if (x == 2)
        {
            int val;
            cout << "Enter Value::";
            cin >> val;
            insertInHead(head, val);
        }
        else if (x == 3)
        {
            int val, pos;
            cout
                << "Enter your value and position with space::";
            cin >> val >> pos;
            cout << endl;
            insetAnyPosition(head, val, pos);
        }
        else if (x == 4)
        {
            printNode(head);
        }
        else if (x == 5)
        {
            int pos;
            cout
                << "Enter your node position:";
            cin >> pos;
            cout << endl;
            deletNode(head, pos);
        }
        else if (x == 6)
        {
            deleteHead(head);
        }
        else if (x == 7)
            break;
        else
        {
            cout << "Sorry Choose an option";
        }
        // clrscr();
        cin.ignore();
        cin.get();
        system("clear");
    }
    cout << nodeCount << endl;

    return 0;
}