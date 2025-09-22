#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    long long m;
    cin >> n >> m;

    vector<int> trees(n);
    for (int i = 0; i < n; ++i)
        cin >> trees[i];

    int left = 0;
    int right = *max_element(trees.begin(), trees.end());
    int answer = 0;

    while (left <= right) {
        int mid = (left + right) / 2;
        long long total = 0;

        for (int i = 0; i < n; ++i) {
            if (trees[i] > mid)
                total += trees[i] - mid;
        }

        if (total >= m) {
            answer = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << answer << endl;
    return 0;
}
