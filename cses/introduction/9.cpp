#include <iostream>
using namespace std;
#define ull unsigned long long
 
int main () {
    ull n, ans=1;
    ull md = 1000000007;
    cin >> n;
    for (ull i = 1; i <= n; i += 1) {
        ans = (ans * 2) % md;
    }
    cout << ans << endl;
}
