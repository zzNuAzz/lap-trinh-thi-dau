#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // freopen("testcase", "r", stdin);
    int n, t, f, x;
    cin >> n >> t >> f >> x;

    int ret = n - f;
    t = (t - 1) * 60;
    int time = x * ret;
    if (time == t)
        cout << "EXACT!";
    else {
        if (time > t) {
            cout << "NO\n";
            cout << time - t << "\n";
            cout << ceil(float(time - t) / x);
        } else {
            cout << "YES\n";
            cout << t - time;
        }
    }

    return 0;
}