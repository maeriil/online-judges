#include <iostream>
using namespace std;
 
int main () {
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i += 1) {
        long long mx = ((i*i)*((i*i) - 1))/2;
        long long na = 4*(i-1)*(i-2);
        cout << mx - na << endl;
    }
}
