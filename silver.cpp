#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int nmax = 1e6 + 1;

int main() {
    // freopen("testcase", "r", stdin);
    int n;
    int arr[nmax];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int fi = -1, se;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > fi) {
            se = fi;
            fi = arr[i];
        } else if (arr[i] != fi && arr[i] > se) {
            se = arr[i];
        }
    }
    cout << se;
    return 0;
}