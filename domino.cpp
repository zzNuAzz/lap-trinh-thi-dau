#include <iostream>
using namespace std;
#define nmax 100
int n;
int l1[nmax];
int l2[nmax];
int sum1 = 0;
int sum2 = 0;
int step = 0;
int diff;

void backtrack(int i) {
    int cdiff = abs(sum1 - sum2);
    if(cdiff < diff) {
        diff = cdiff;
    } 

    if(i == n) return;
    //khong lat
        backtrack(i+1);
    //lat
        sum1 += -l1[i] + l2[i];
        sum2 += l1[i] - l2[i];
        backtrack(i+1);
        sum1 -= -l1[i] - l2[i];
        sum2 -= l1[i] - l2[i];
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> l1[i];
        sum1 += l1[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> l2[i];
        sum2 += l2[i];
    }
    diff = abs(sum1 - sum2);
    backtrack(0);
    cout <<diff;
    return 0;
}
