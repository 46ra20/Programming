#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> v;
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        if (x == 1)
        {
            int y;
            cin >> y;
            v.push_back(y);
        }
        else if (x == 2)
        {
            if (v.empty())
                cout << "-1" << endl;
            v.pop_front();
        }
        else if (x == 3)
        {
            if (v.empty())
                cout << "-1" << endl;
            cout << v.front() << endl;
        }
        else if (x == 4)
        {
            cout << v.empty() << endl;
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
// class Queue {
// public:
//     list<long long int>n;
//     Queue() {
//         // Implement the Constructor
//         // n=NULL;

//     }

//     /*----------------- Public Functions of Queue -----------------*/

//     bool isEmpty() {
//         // Implement the isEmpty() function
//         return n.empty();
//     }

//     void enqueue(int data) {
//         // Implement the enqueue() function
//         n.push_back(data);
//     }

//     int dequeue() {
//         if(n.empty()) return -1;
//         int x = n.front();
//         n.pop_front();
//         return x;
//         // Implement the dequeue() function
//     }

//     int front() {
//         if(n.empty()) return -1;
//         return n.front();
//         // Implement the front() function
//     }
// };