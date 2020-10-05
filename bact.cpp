#include <iostream>
using namespace std;

int bact(int a, int b, int c, int d, int k) {
    for(int i =0 ; i < k; i++) {
        if(a*b -c == a) return a;
        a = a*b;
        if(c > a) {
            a = 0; break;
        }
        a -= c;
        if(a > d) {
            return d;
            a = d;
        }
    }
    return a;
}

int bact2(int a, int b, int c, int d, int k) {
    return 0;
}

int main() {
    int a,b,c,d,k;
    // freopen("testcase", "r", stdin);
    
    cin >> a >> b >> c >> d >> k;
    cout << bact(a,b,c,d, k);


}