#include <iostream>
using namespace std;
 
long long c1 (long long x, long long y) {
    return x*x-y+1;
}
 
long long c2 (long long x, long long y) {
    return (x-1)*(x-1)+y;
}
 
void go (long long n, long long m) {
    if (n >= m) {
        if (n%2 == 0) cout << c1(n, m) << endl;
        else cout << c2(n, m) << endl;
    } else {
        if (m % 2 == 0) cout << c2(m, n) << endl;
        else cout << c1(m, n) << endl;
    }
}
 
int main () {
    int x;
    cin >> x;
    while (x--) {
        long long l, r;
        cin >> l >> r;
        go(l, r);
    }
}
 
// cases
// n >= m
// -- n even, m even: n^2-m+1
// -- n even, m odd: n^2-m+1
// -- n odd, m even: (n-1)^2+m
// -- n odd, m odd: (n-1)^2+m
// n < m
// -- n even, m even: (m-1)^2+n
// -- n even, m odd: m^2-n+1
// -- n odd, m even: (m-1)^2+n 
// -- n odd, m odd: m^2-n+1
