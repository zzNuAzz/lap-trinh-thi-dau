#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int nmax = 100000 + 1;

int main() {
    freopen("testcase", "r", stdin);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int f[nmax];
    f[0] = 1;
    int minf = 0;
    int maxf = 1;
    for(int i = 1; i < n; i++) {
        if(s[i] == s[0]) {
            f[i] = f[i-1] + 1;
        }
        else {
            f[i] = f[i-1] - 1;
        }

      if(f[i] < minf) minf = f[i];
      if(f[i] > maxf) maxf = f[i];
    }
    cout << maxf - minf;
    return 0;
}