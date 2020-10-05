#include <bits/stdc++.h>
using namespace std;
#define maxdg 10

bool use[maxdg];
vector<string> coso;

string sheep(int n) {
    queue<string> q;

    if(n <= coso.size()) return coso[n-1 + (coso[0] == "0" ? 1 : 0)];

    for (string c : coso) {
        if (c != "0") q.push(c);
    };
    int count = coso.size() - (coso[0] == "0" ? 1 : 0);
    string ans;
    while(count != n) {
        ans = q.front();
        for(string c : coso) {
            count++;
            if(count >= n) return ans + c;
            q.push(ans + c);
        }
        q.pop();
    }
}

int main() {
    // freopen("testcase", "r", stdin);
    int n, l;
    cin >> n >> l;
    memset(use, 1, sizeof(use));

    for (int i = 0; i < l; i++) {
        int k;
        cin >> k;
        use[k] = 0;
    }
    for (int i = 0; i < maxdg; i++) {
        if (use[i]) coso.push_back(to_string(i));
    }
    cout << sheep(n);
    return 0;
}