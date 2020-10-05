#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    for (int i = 0; i < 2; ++i) {
        for (int j = i + 1; j < 3; ++j) {
            if (a[i] < a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    cout << a[0] << a[1] << a[2];

    return 0;
}