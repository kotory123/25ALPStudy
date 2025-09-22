#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> cookies(m);
    for (int i = 0; i < m; i++) {
        cin >> cookies[i];
    }

    sort(cookies.begin(), cookies.end());

    int low = 1; 
    int high = cookies[m - 1]; 
    int result = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        int count = 0;

        for (int i = 0; i < m; i++) {
            count += cookies[i] / mid;
        }

        if (count >= n) {
            result = mid; 
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }

    cout << result << endl;
    return 0;
}
