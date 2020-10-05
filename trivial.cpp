#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int vmin = -1;
const int vmax = 1001;

float dt(int a) {
    int sum = 1;
    for (int i = 2; i <= sqrt(a); ++i) {
        if (a % i == 0) {
            sum += i + a / i;
        }
    }
    return (float)sum / a;
}

int main() {
    // freopen("testcase", "r", stdin);
    int a, b;
    cin >> a >> b;
    int nmin, nmax;
    float min = vmax, max = vmin;

    for (int i = a; i <= b; ++i) {
        float t = dt(i);
        if (t < min) {
            min = t;
            nmin = i;
        }
        if (t > max) {
            max = t;
            nmax = i;
        }
    }
    cout << nmin << " " << nmax;

    return 0;
}