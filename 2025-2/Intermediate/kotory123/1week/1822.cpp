#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> A(n);
    vector<int> B(m);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    vector<int> result;
 
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (binary_search(B.begin(), B.end(), A[i]) == false) {
            result.push_back(A[i]);
            count++;
        }
    }

    cout << count << endl;

    for (int i = 0; i < count; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
