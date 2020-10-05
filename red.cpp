#include <iostream>
using namespace std;
#include <vector>
void red(vector<int> arr, int bi) {
    int l = 0;int r = 0;
    for(int i = 0; i < bi - 1; i++) {
        if(arr[i] == arr[bi - 1]) l++;
    }
    for(int i = arr.size()-1; i > bi -1; i--) {
        if(arr[i] == arr[bi - 1]) r++;
    }
    cout <<  l << " " << r << endl;
}

int main() {
    // freopen("testcase", "r", stdin);
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int bi;
    for(int i = 0; i < k; i++) {
        cin >> bi;
        red(arr, bi);
    }
    
    return 0;
}