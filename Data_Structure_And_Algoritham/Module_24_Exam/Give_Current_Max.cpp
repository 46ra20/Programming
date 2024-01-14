// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     string name;
//     int roll;
//     int mark;
//     Student() {}
//     Student(string name, int roll, int mark)
//     {
//         this->name = name;
//         this->roll = roll;
//         this->mark = mark;
//     }
// };
// bool cmp(Student a, Student b)
// {
//     if (a.mark == b.mark)
//         return a.roll < b.roll;
//     return a.mark > b.mark;
// }
// bool fun(Student a, Student b)
// {
//     if (a.mark == b.mark)
//         return a.roll > b.roll;
//     return a.mark < b.mark;
// }
// int main()
// {
//     int n;
//     cin >> n;

//     vector<Student> v(n);

//     for (int i = 0; i < n; i++)
//     {
//         int roll, mark;
//         string name;
//         cin >> name >> roll >> mark;

//         v[i].name = name;
//         v[i].roll = roll;
//         v[i].mark = mark;
//     }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int i;
//         cin >> i;
//         if (i == 0)
//         {
//             int roll, mark;
//             string name;
//             cin >> name >> roll >> mark;
//             Student nSt(name, roll, mark);
//             v.push_back(nSt);
//             sort(v.begin(), v.end(), cmp);
//             cout << v[0].name << " " << v[0].roll << " " << v[0].mark << endl;
//         }
//         else if (i == 1)
//         {
//             if (v.empty())
//                 cout << "Empty" << endl;
//             else
//             {
//                 sort(v.begin(), v.end(), cmp);
//                 cout << v[0].name << " " << v[0].roll << " " << v[0].mark << endl;
//             }
//         }
//         else if (i == 2)
//         {
//             if (!v.empty())
//             {
//                 sort(v.begin(), v.end(), fun);
//                 v.pop_back();
//             }
//             if (v.empty())
//                 cout << "Empty" << endl;
//             else
//             {
//                 sort(v.begin(), v.end(), cmp);
//                 cout << v[0].name << " " << v[0].roll << " " << v[0].mark << endl;
//             }
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int mark;
    Student() {}
    Student(string name, int roll, int mark)
    {
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
};
class Compare
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.mark == b.mark)
            return a.roll > b.roll;
        return a.mark < b.mark;
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, Compare> pq;
    for (int i = 0; i < n; i++)
    {
        int mark, roll;
        string name;
        cin >> name >> roll >> mark;
        pq.push({name, roll, mark});
    }
    int q;
    cin >> q;
    while (q--)
    {
        int i;
        cin >> i;

        if (i == 0)
        {
            int mark, roll;
            string name;
            cin >> name >> roll >> mark;
            pq.push({name, roll, mark});
            Student a = pq.top();
            cout << a.name << " " << a.roll << " " << a.mark << endl;
        }
        else if (i == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                Student a = pq.top();
                cout << a.name << " " << a.roll << " " << a.mark << endl;
            }
        }
        else if (i == 2)
        {
            if (!pq.empty())
                pq.pop();
            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                Student a = pq.top();
                cout << a.name << " " << a.roll << " " << a.mark << endl;
            }
        }
    }
    return 0;
}