#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string a, string b) {
    if(a.length() > b.length()) return 0;
    int k = 0;
    for(int i = 0; i < b.length(); i++) {
        if(a[k] == b[i]) k++;
    }
    return (k == a.length());

}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << isSubsequence(s1, s2);

    return 0;
}