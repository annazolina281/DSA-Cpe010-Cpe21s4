#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    if (q.empty()) {
        cout << "Underflow" << endl;
    }

    int n1 = 10, n2 = 24, n3 = 28, n4 = 32, n5 = 30;

    q.push(n1);
    cout << n1 << " has been inserted successfully." << endl;

    q.push(n2);
    cout << n2 << " has been inserted successfully." << endl;

    q.push(n3);
    cout << n3 << " has been inserted successfully." << endl;

    q.push(n4);
    cout << n4 << " has been inserted successfully." << endl;

    q.push(n5);
    cout << n5 << " has been inserted successfully." << endl;

    queue<int> num = q;
    while (!num.empty()) {
        cout << num.front() << " ";
        num.pop();
    }
    cout << endl;

    while (!q.empty()) {
        cout << q.front() << " is being deleted" << endl;
        q.pop();
    }

    return 0;
}
