#include <bits/stdc++.h>
using namespace std;
#define MIN_INT -2147483647
int s, d;
int mem[12];
int sum = 0;
int maxsum = MIN_INT;
void back(int i) {
    if (i > 4) {
        int diff = 0;
        for (int k = 1; k <= 5; k++) {
            if (mem[i - k] == 0) {
                diff -= d;
            } else {
                diff += s;
            }
        }
        if (diff >= 0) return;
    }
    if (i == 12) {
        if (sum > maxsum) maxsum = sum;
        return;
    }
    // thang i tham hut
    sum -= d;
    back(i + 1);
    sum += d;
    // thang i thang du
    mem[i] = 1;
    sum += s;
    back(i + 1);
    sum -= s;
    mem[i] = 0;
}

int main() {
    while (cin >> s >> d) {
        memset(mem, 0, sizeof(mem));
        sum = 0, maxsum = MIN_INT;
        back(0);
        if (maxsum < 0)
            cout << "Deficit" << endl;
        else
            cout << maxsum << endl;
    }
}