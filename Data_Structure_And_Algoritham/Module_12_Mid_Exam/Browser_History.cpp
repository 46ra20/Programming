// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     string site_name;
//     Node *next;
//     Node *pre;
//     Node() {}
//     Node(string site_name)
//     {
//         this->site_name = site_name;
//         this->next = NULL;
//         this->pre = NULL;
//     }
// };
// void insert_node(Node *&head, Node *&tail, string s)
// {
//     Node *n = new Node(s);
//     if (head == NULL)
//     {
//         head = n;
//         tail = n;
//         return;
//     }
//     tail->next = n;
//     n->pre = tail;
//     tail = n;
// }
// void print_reverse(Node *pr)
// {
//     while (pr != NULL)
//     {
//         cout << pr->site_name << " ";
//         pr = pr->pre;
//     }
// }
// int main()
// {
//     Node *head = NULL, *tail = NULL;
//     while (1)
//     {
//         string s;
//         cin >> s;
//         if (s == "end")
//             break;
//         else
//         {
//             insert_node(head, tail, s);
//         }
//     }
//     int q;
//     cin >> q;
//     Node *tem = head, *tem2 = NULL;

//     for (int j = 0; j <= q; j++)
//     {
//         string s, command[2];
//         int i = 0;
//         getline(cin, s);
//         // cout<<
//         stringstream ss(s);
//         while (ss >> s)
//         {
//             command[i++] = s;
//         }
//         if (command[0] == "visit")
//         {
//             tem = head;
//             while (tem != NULL)
//             {
//                 if (tem->site_name == command[1])
//                 {
//                     cout << tem->site_name << endl;
//                     break;
//                 }
//                 tem = tem->next;
//             }
//             if (tem)
//                 tem2 = tem;
//             else
//             {
//                 cout << "Not Available" << endl;
//             }
//         }
//         else if (command[0] == "prev")
//         {
//             if (tem2->pre)
//             {
//                 cout << tem2->pre->site_name << endl;
//                 tem2 = tem2->pre;
//             }
//             else
//                 cout << "Not Available" << endl;
//         }
//         else if (command[0] == "next")
//         {
//             if (tem2->next)
//             {
//                 cout << tem2->next->site_name << endl;
//                 tem2 = tem2->next;
//             }
//             else
//                 cout << "Not Available" << endl;
//         }
//     }
//     // cout << tem22->site_name << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     string site_name;
//     Node *next;
//     Node *pre;
//     Node() {}
//     Node(string site_name)
//     {
//         this->site_name = site_name;
//         this->next = NULL;
//         this->pre = NULL;
//     }
// };
// void insert_node(Node *&head, Node *&tail, string s)
// {
//     Node *n = new Node(s);
//     if (head == NULL)
//     {
//         head = n;
//         tail = n;
//         return;
//     }

//     tail->next = n;
//     n->pre = tail;
//     tail = n;
//     return;
// }
// Node *query_site(Node *head, string s)
// {
//     Node *tem = head;
//     while (tem != NULL)
//     {
//         if (tem->site_name == s)
//         {
//             return tem;
//         }
//         tem = tem->next;
//     }
//     if (tem == NULL)
//         cout << "Not Available" << endl;
//     return tem;
// }
// int main()
// {
//     Node *head = NULL, *tail = NULL;
//     while (1)
//     {
//         string s;
//         cin >> s;
//         if (s == "end")
//             break;
//         insert_node(head, tail, s);
//     }
//     int q;
//     cin >> q;
//     Node *tem = NULL, *tem_2 = NULL;
//     while (q--)
//     {
//         string query_string, command[2];
//         int i = 0;
//         getline(cin, query_string);
//         stringstream ss(query_string);
//         while (ss >> query_string)
//             command[i++] = query_string;
//         if (command[0] == "visit")
//         {
//             tem_2 = tem;
//             tem = query_site(head, command[1]);
//             if (tem != NULL)
//                 cout << tem->site_name << endl;
//             // else
//             //     tem = tem_2;
//         }
//         else if (command[0] == "prev")
//         {
//             if (tem->pre)
//             {
//                 cout << tem->pre->site_name << endl;
//                 tem = tem->pre;
//             }
//             else
//                 cout << "Not Available" << endl;
//         }
//         else if (command[0] == "next")
//         {
//             if (tem->next)
//             {
//                 cout << tem->next->site_name << endl;
//                 tem = tem->next;
//             }
//             else
//                 cout << "Not Available" << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<string> bh;
//     while (1)
//     {
//         string s;
//         cin >> s;
//         if (s == "end")
//             break;
//         bh.push_back(s);
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         string s;
//         cin >> s;
//         auto it = bh.begin();
//         if (s == "visit")
//         {
//             string site_name;
//             cin >> site_name;
//             for (; it != bh.end(); it++)
//             {
//                 if (*it == site_name)
//                 {
//                     cout << *it << endl;
//                     break;
//                 }
//             }
//         }
//         if(s=="next"){
//             it++;
//             if(it) cout<<*it<<endl;
//         }
//     }
//     return 0;
// }