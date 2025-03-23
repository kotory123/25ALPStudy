#include <iostream>
#include <deque>
using namespace std;

int main() {
    string t;
    int num;
    cin >> t;
    cin >> num;

    deque<char> left, right;

    for (char c : t) {
        left.push_back(c);
    }

    for (int i = 0; i < num; i++) {
        char cmd;
        cin >> cmd;

        if (cmd == 'L') {
            if (!left.empty()) {
                right.push_front(left.back());
                left.pop_back();
            }
        }
        else if (cmd == 'D') {
            if (!right.empty()) {
                left.push_back(right.front());
                right.pop_front();
            }
        }
        else if (cmd == 'B') {
            if (!left.empty()) {
                left.pop_back();
            }
        }
        else if (cmd == 'P') {
            char c;
            cin >> c;
            left.push_back(c);
        }
    }

    for (char c : left) {
        cout << c;
    }
    for (char c : right) {
        cout << c;
    }
    cout << endl;

    return 0;
}
