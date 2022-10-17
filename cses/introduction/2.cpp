#include <iostream>
using namespace std;
 
int main () {
    long long n, m, ans=0;
    cin >> n;
    long long max = n*(n+1)/2;
    for (int i = 0; i < n - 1; i += 1) {
        cin >> m;
        ans+=m;
    }
    cout << max - ans << endl;
}
