#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    int index =0;
    int count = 0;
    while (sum < n) {
        ++index;
        if(sum +index < n) {
            sum+= index;
            count++;
        } else break;
        if(sum + index < n) {
            sum+= index;
            count++;
        } else break;

    }
    
    cout << (count + (sum == n ? 0 : 1));

    return 0;
}

/*
19
1 2 3 4 3 2 1
7 + 1
*/