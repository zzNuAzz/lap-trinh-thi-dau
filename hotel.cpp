#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    int p2, p3 = n / 3;
    int rest = n % 3;
    if (rest % 2 == 0) { // rest = [0,2];
        p2 = rest / 2;
    } else { // rest = 1
        p2 = 2;
        p3 -= 1;
    }
    cout << p2 << " " << p3;

    return 0;
}