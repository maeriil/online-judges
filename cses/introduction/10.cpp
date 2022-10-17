#include <iostream>
using namespace std;
#define ull unsigned long long
 
int main () {
    ull n, tms=0;
    cin >> n;
    
    while (n >= 5) {
        n /= 5;
        tms += n;
    }
    cout << tms << endl;
}
