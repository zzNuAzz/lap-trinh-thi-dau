#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define st first
#define nd second
const int nmax = 1e5 + 1;

int main() {
    // freopen("testcase", "r", stdin);
    int n;
    int arr[nmax];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int f1[nmax], f2[nmax], pre[nmax];
    f1[0] = 1;
    f2[0] = 1;
    pre[0] = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] == arr[i - 1]) {
            f1[i] = f1[i - 1] + 1;
            f2[i] = f2[i - 1] + 1;
            pre[i] = pre[i - 1];
        } else {
            f1[i] = 1;
            pre[i] = arr[i - 1];
            if (arr[i] == pre[i - 1]) {
                f2[i] = f2[i - 1] + 1;
            } else {
                f2[i] = f1[i - 1] + 1;
            }
        }
    }
    int lmax = 0;
    int left, right;
    for (int i = 0; i < n; ++i) {
        if (f2[i] > lmax) {
            lmax = f2[i];
            right = i;
            left = i - f2[i] + 1;
        }
    }
    cout << left + 1 << " " << lmax;

    return 0;
}