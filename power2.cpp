#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    // freopen("testcase", "r", stdin);
    
    int n;
    cin >> n;
    vector<long long> a(n);
    
    vector<long long> res;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        float lo2 = log2(a[i]);
        if((long long)lo2 == lo2) res.push_back(a[i]);
    }
    sort(res.begin(), res.end());
    if(res.size() == 0) cout << "No";
    else for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    
    return 0;
}