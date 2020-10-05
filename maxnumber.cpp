#include <iostream>
#include <string.h>
using namespace std;


int main() {
    // freopen("testcase", "r", stdin);
    
    int a1[10], a2[10];
    memset(a1, 0, sizeof(a1));
    memset(a2, 0, sizeof(a2));
    string s1;
    string s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.length(); i++) {
        a1[s1[i] - '0']++;
    }
    for(int i = 0; i < s2.length(); i++) {
        a2[s2[i] - '0']++;
    }
    int res[10];
    memset(res, 0, sizeof(res));
    for(int i = 0; i < 10; i++) {
        res[i] = (a1[i] < a2[i] ? a1[i] : a2[i]);
    }
    string ans = "";
    for(int i = 9; i >= 0; i-- ) {
        for(int k = 0; k < res[i]; k++) {
            ans += char(i + '0');
        }
    }
    if(ans.length() == 0) cout << "No solution";
    else if(ans[0] == '0') cout << 0;
    else cout << ans;
    return 0;
}