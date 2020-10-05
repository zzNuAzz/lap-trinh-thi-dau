#include <bits/stdc++.h>
using namespace std;
#define nmax 1000
int fibo(int n) {
    int fib[nmax];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}
int main() {
    int n;
    cin >> n;

    cout << fibo(n);

    return 0;
}