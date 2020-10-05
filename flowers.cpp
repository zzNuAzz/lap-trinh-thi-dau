#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int nmax = 10e4 + 1;
int arr[nmax];

int main() {
    // freopen("testcase", "r", stdin);
    
    int n, q;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> q;
    ll ans = 0;
    int height = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > height) {
            ans += (arr[i] - height) * i;
            height = arr[i];
        } else {
            ans += height - arr[i];
        }
    }
    cout << ans * (ll)q;
    return 0;
}