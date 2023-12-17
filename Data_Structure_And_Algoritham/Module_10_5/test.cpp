#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    // Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
// head a insert hebe
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
// any postion a insert hebe
void inser_any_pos(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    if (temp->next->next)
    {
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
    // newNode->next=temp->next
    cout << "from temp function:- " << temp->val << endl;
}
// rigth_print hebe
int size_list(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
// rigth_print hebe
void rigth_print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
// rev_printt hebe
void rev_print(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
            rigth_print(head);
            rev_print(tail);
        }
        else if (x <= size_list(head))
        {
            inser_any_pos(head, x, v);
            rigth_print(head);
            rev_print(tail);
        }
        else
            cout << "Invalid" << endl;
    }
    return 0;
}
