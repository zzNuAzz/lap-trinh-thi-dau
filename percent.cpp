#include <iostream>
using namespace std;
int UCLN(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    if(a==b) return a;
    if(a>b) 
        return UCLN(a-b,b);
    else
        return UCLN(a,b-a);
}
int BCNN(int a, int b){
    return (a*b/UCLN(a,b) );
}
int BCNN_Mang(int a[],int n){
    int temp = BCNN(a[0], a[1] );
    for(int i=2;i<n;i++){
        temp = BCNN(temp, a[i]);    
    }
    return temp;
}
int main() {
    int n;
    // freopen("testcase", "r", stdin);
    cin >> n;
    while (n--)
    {   
        int a[5];
        cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
        int ms[5];
        for(int i = 0; i < 5; i++) {
            int uc = UCLN(a[i], 100);
            ms[i] = 100 / uc;
            a[i] = a[i] / uc;
            // cout << a[i] << "/" << ms[i] << endl;
        }
       
        int bcnn = BCNN_Mang(ms, 5);
        int ans = 0;
        for(int i = 0; i < 5; i++) {
            ans += a[i] * (bcnn / ms[i]);
            // cout << ans << endl;
        }
        cout << ans << endl;
    }


    return 0;
}