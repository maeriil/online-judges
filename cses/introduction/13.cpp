#include <iostream>
#include <vector>
using namespace std;
 
int main () {
	int n;
	cin >> n;
	vector<string> f, e, o;
	f.push_back("0");
	f.push_back("1");
	
	while (n-->1) {
		int sz = f.size();
		for (int i = 0; i < sz; i += 1) {
			e.push_back("0" + f[i]);
			o.push_back("1" + f[sz-i-1]);
		}
		f.clear();
		for (auto &i: e) f.push_back(i);
		for (auto &i: o) f.push_back(i);
		e.clear();
		o.clear();
	}
	for (auto &i: f) cout << i << endl;
}
