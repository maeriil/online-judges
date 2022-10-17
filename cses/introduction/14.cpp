#include <iostream>
using namespace std;
 
void go (int n, int start, int end) {
	if (n == 1) {
		cout << start << " " << end << endl;
		return;
	}
	int other = 6 - (start + end);
	go (n - 1, start, other);
	cout << start << " " << end << endl;
	go (n - 1, other, end);
}
 
int main () {
	int n;
	cin >> n;
	long long x = 1;
	
	for (int i = 1; i <= n; i += 1) x *= 2;
	cout << x - 1 << endl;
	go(n, 1, 3);
}
