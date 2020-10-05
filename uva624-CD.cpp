#include <iostream>
#include <cstring>
using namespace std;
int m, n;
int mem[20], tmp[20];
int sum;
int csum = 0;
int len[20];
void back(int i) {
    if(csum > n) return;
    
    if(i == m) {
        if(csum >= sum) {
            sum = csum;
            for(int i = 0 ; i < m; i++) {
                 mem[i] = tmp[i];
            }
        }
        return;
    }

    back(i+1);
    csum += len[i];
    tmp[i] = 1;
    back(i+1);
    csum -= len[i];
    tmp[i] = 0;

}

int main() {

    while(cin >> n >> m) {
        sum = 0, csum = 0;
        for(int i = 0; i < m; i++) {
            cin >> len[i];
        }
        memset (tmp, 0, sizeof(tmp));
        back(0);
        for(int i = 0; i < m; i++) {
            if(mem[i]) cout << len[i] << " "; 
        }
        cout << "sum:" << sum << endl;
    }

    return 0;
}