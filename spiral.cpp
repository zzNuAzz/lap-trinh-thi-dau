#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll spiral(ll n, ll m) {
    // if (n == 1) return 0;
    // if (m == 1) return 1;
    // if (n == m) return (n - 1) * 2;
    if (n <= m) return (n - 1) * 2;
    return 2 * m - 1;
}
int spiral2(ll n, ll m) {
    if (n == 1) return 0;
    if (m == 1) return 1;
    return 1 + spiral2(m, n-1);
}
int main() {
    // freopen("testcase", "r", stdin);
    ll m, n;
    cin >> n >> m;
    cout << spiral(n,m);
    // cout << spiral2(n,m);
    
    return 0;
}