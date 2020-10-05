#include <iostream>
using namespace std;

int n;
int a[8];
int summax = 0;
int arr[8][8];

bool check(int x, int y) {
	for(int i = 0; i < x; i++) {
		if(a[i] == y) return 0;
		if(i+a[i] == x + y) return 0;
		if(i-a[i] == x - y) return 0;
	}
	return 1;
}

void backtrack(int i) {
	if(i == 8) {
		int sum = 0;
		for(int j = 0; j < 8; j++) {
			sum+= arr[i][a[i]];
		}
        if(sum > summax) summax = sum;
	}
	else {
		for(int j = 0; j < 8; j++) {
			if(check(i, j)) {
				a[i] = j;
				backtrack(i+1);
			}
		}
	}
}

int main() {
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> arr[i][j];
        }
    }
	backtrack(0);
    cout << summax;
	return 0;
}