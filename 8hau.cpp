#include <iostream>
using namespace std;

int n;
int a[8];
int count = 0;

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
		count++;
		for(int j = 0; j < 8; j++) {
			cout << a[j]+1 << (j == 8-1 ? "\n" : " ");
		}
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
	backtrack(0);
	cout << count << " solution\n";
	return 0;
}