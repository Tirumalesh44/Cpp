#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void squares(vector<int>& v, int m, vector<int>& v1) {
    int p = 0, q = m - 1;
    int idx = m - 1; // Start filling v1 from the end

    while (p <= q) { // Use <= to handle the case when p == q
        if (abs(v[p]) > abs(v[q])) {
            v1[idx--] = v[p] * v[p];
            p++;
        } else {
            v1[idx--] = v[q] * v[q];
            q--;
        }
    }
}

int main() {
    int m;
    cout << "Enter the size of vector: ";
    cin >> m;

    vector<int> v(m);
    cout << "Enter the values: ";
    for (int i = 0; i < m; i++) {
        cin >> v[i]; // Directly set elements in v
    }

    vector<int> v1(m);
    squares(v, m, v1);

    cout << "Squared values: ";
    for (int i = 0; i < m; i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}
