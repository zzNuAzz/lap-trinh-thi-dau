#include <bits/stdc++.h>
using namespace std;
#define nmax 11
#define mmax 101

int m, n;
int a[mmax], b[mmax], c[mmax], d[mmax];

string normal(int num) {
    if (num < 10) return "000" + to_string(num);
    if (num < 100) return "00" + to_string(num);
    if (num < 1000) return "0" + to_string(num);
    return to_string(num);
}

int call(int time, int to, vector<int> &visited) {
    for (int i : visited) {
        if (i == to) return 9999;
    }
    visited.push_back(to);
    for (int i = 0; i < m; i++) {
        if (to == a[i] && time >= b[i] && time <= b[i] + c[i]) {
            return call(time, d[i], visited);
        }
    }
    return to;
}

int main() {
    cin >> n;

    for (m = 0;; m++) {
        cin >> a[m];
        if (a[m] == 0)
            break;
        else
            cin >> b[m] >> c[m] >> d[m];
    }

    cout << "CALL FORWARDING OUTPUT\n";
    cout << "SYSTEM 1\n";
    for (int test = 1; test <= n; test++) {
        int time;
        while (cin >> time) {
            if (time == 0) {
                cout << "SYSTEM " << test << endl;
            } else if (time == 9000) {
                break;
            } else {
                int to;
                cin >> to;
                vector<int> visited;
                int ring = call(time, to, visited);
                cout << "AT " << normal(time) << " CALL TO " << normal(to)
                     << " RINGS " << normal(ring) << endl;
            }
        }
    }
    cout << "END OF OUTPUT";

    return 0;
}