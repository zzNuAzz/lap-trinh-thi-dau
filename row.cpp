#include <iostream>
#include <vector>
using namespace std;

int main(){
    freopen("testcase", "r", stdin);
    int n, q;
    cin >> n;
    vector<vector<int> > f(5, vector<int>(n+1, 0));
    for(int i = 1; i <= n; i++) {
        int d, h, c;
        cin >> d >> h >> c;
        c--;
        int sq = d * h;
        for(int j = 0; j < 5; j++) {
            f[j][i] = f[j][i-1] + (j == c ? sq : 0);
        }
    }
    cin >> q;
    for(int t = 0; t < q; t++) {
        int i, j, c;
        cin >> i >> j >> c;
        c--;
        cout << f[c][j] - f[c][i] << endl;
    }
    return 0;
}