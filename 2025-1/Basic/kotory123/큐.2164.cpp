#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    std::queue<int> q;

    int n;
    int x;
    cin >> n;

    for (int i = 0; i < n; i++) {

        q.push(i+1);
    }
    while (q.size()>1) {

        q.pop();
        int front = q.front();
        q.pop();
        q.push(front);

    }
    cout << q.front();
}
