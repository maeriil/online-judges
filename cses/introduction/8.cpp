#include <iostream>
#include <vector>
using namespace std;
 
int main () {
    long long n, sm;
    cin >> n;
    sm = n*(n+1)/2;
    if (sm % 2 != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        vector<long long> set1, set2;
        if (n % 2 == 0) {
            long long sm1 = 0, sm2 = 0;
            for (int i = 1; i <= n/2; i += 2) {
                set1.push_back(i);
                set1.push_back(n-i+1);
                sm1 += i + (n-i+1);
            }
            for (int i = 2; i <= n/2; i += 2) {
                set2.push_back(i);
                set2.push_back(n-i+1);
                sm2 += i + (n-i+1);
            }
            if (sm1 != sm2) {
                set2.insert(set2.begin(), 1);
                set1.erase(set1.begin());
            }
        } else {
            long long sm1 = 0, sm2 = 0;
            set1.push_back(1);set1.push_back(2);
            set2.push_back(3);
            for (int i = 1; i <= (n-4)/2; i += 2) {
                set1.push_back(i+3);
                set1.push_back(n-i+1);
            } 
            for (int i = 1; i <= (n-5)/2; i += 2) {
                set2.push_back(i+4);
                set2.push_back(n-i);
            }
        }
        cout << set1.size() << endl;
        for (auto &i: set1){
            cout << i << " ";
        }
        cout << endl;
        cout << set2.size() << endl;
        for (auto &i: set2) {
            cout << i << " ";
        }
    }
}
