#include <iostream>
using namespace std;

int n;
bool a[1000];
int open = 0, close = 0;
void backtrack(int i) {
	if(i == 2 * n) {
		for(int j = 0; j < 2*n; j++) {
			cout << (a[j] ? "(" : ")") << (j == 2*n-1 ? "\n" : "");
		}
	}
	else {
		if(open < n) {
			open++;
			a[i] = 1;
			backtrack(i+1);
			open--;
		}
		if(open - close > 0) {
			close++;
			a[i] = 0;
			backtrack(i+1);	
			close--;
		}
	}
}
int main() {
	cin >> n;
	backtrack(0);
	return 0;
}