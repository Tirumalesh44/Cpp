#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& v1, const vector<int>& v2) {
    int i = v1.size() - v2.size() - 1;
    int j = v2.size() - 1;
    int k = v1.size() - 1;

    while (i >= 0 && j >= 0) {
        if (v1[i] >= v2[j]) {
            v1[k--] = v1[i--];
        } else {
            v1[k--] = v2[j--];
        }
    }

    while (j >= 0) {
        v1[k--] = v2[j--];
    }
}

int main() {
    int m, n;
    cin >> m;

    vector<int> v1(m + n);
    for (int i = 0; i < m; ++i) {
        cin >> v1[i];
    }

    cin >> n;

    vector<int> v2(n);
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
    }

    merge(v1, v2);

    for (int i = 0; i < m + n; ++i) {
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}
