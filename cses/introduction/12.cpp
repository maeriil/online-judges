#include <iostream>
using namespace std;
#define ll long long
 
int count [26];
 
int main () {
    string n;
    cin >> n;
    for (auto &i: n) {
        count[i - 'A']++;
    }
    bool once = false, possible = true;
    int idx = 0;
    for (int i = 0; i < 26; i += 1) {
        if (count[i]%2!=0 && !once) {
            once=true;
            idx=i;
        } else if (count[i]%2!=0 && once) {
            possible = false;
        }
    }
    if (!possible) cout << "NO SOLUTION" << endl;
    else {
        string output = "";
        for (int i = 0; i < 26; i += 1) {
            if (i == idx) continue;
            string tmp (count[i]/2, i+'A');
            output += tmp;
        }
        {
            string tmp (count[idx], idx+'A');
            output += tmp;
        }
        for (int i = 25; i >= 0; i -= 1) {
            if (i == idx) continue;
            string tmp (count[i]/2, i+'A');
            output += tmp;
        }
        cout << output << endl;
    }
}
