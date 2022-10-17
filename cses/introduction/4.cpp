#include <iostream>
using namespace std;
 
int main (){
    long long int n, curr, prev=0, mx=0;
    cin >> n;
    for (int i = 0; i < n; i += 1) {
        cin >> curr;
        if (curr < prev) {
            mx+=(prev-curr);
        } else {
            prev=curr;
        }
    }
    cout << mx << " ";
}
