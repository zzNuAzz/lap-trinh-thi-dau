#include <iostream>
using namespace std;

int n;
bool check[1000];
int a[1000];
void backtrack(int i) {
	if(i == n) {
		for(int j = 0; j < n; j++) {
			cout << a[j]+1 << (j == n-1 ? "\n" : " ");
		}
	}
	else {
		for(int j = 0; j < n; j++) {
			if(check[j]) {
				check[j] = 0;
				a[i] = j;
				backtrack(i+1);
				check[j] = 1;
			}
		}
	}
}

int main() {
	cin >> n;
	for(int i = 0; i < n; i++) check[i] = 1;
	backtrack(0);
	return 0;
}