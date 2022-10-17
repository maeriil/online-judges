#include <iostream>
#include <algorithm>
using namespace std;
#define ull unsigned long long
 
string go (ull n, ull m) {
    if (n == 0 && m == 0) return "YES";
    if (n == 0 || m == 0) return "NO";
    if (m > n) swap(n, m); // now, n > m;
    if (m*2 < n) return "NO";
    if ((m+n)%3==0) return "YES";
    else return "NO";
}
 
int main () {
    int t;
    cin >> t;
    while (t--) {
        ull n, m;
        cin >> n >> m;
        cout << go(n, m) << endl;
    }
}
