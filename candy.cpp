#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
const int nmax = 5000;
int f[5001];

void update(int p, int val){
    for(int i = p; i <= nmax; i += i & -i)
        f[i] += val;
}
int sum(int p) {
    int ans = 0;
    for(int i = p; i; i -= i & -i)
        ans += f[i];
    return ans;
}

int main() {
    int n;
    // freopen("testcase", "r", stdin);
    memset(f,0,sizeof(f));
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int mx = 0;
    for(int i = n-1; i >= 0; i--) {
        int p = sum(arr[i]);
        if(p > 0 && arr[i] + p > mx) {
            mx = arr[i] + p;
        }
        update(arr[i], 1);
    }
    if(mx == 0) cout << n;
    else cout << mx;
    return 0;
}