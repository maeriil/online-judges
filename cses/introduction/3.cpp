#include <iostream>
#include <cmath>
using namespace std;
 
int main (){
    string n;
    cin >> n;
    long long mx=0,ln=1;
    char curr='$';
    for (auto &i: n){
        if (i != curr){
            mx=max(mx, ln);
            curr=i;
            ln=1;
        } else ln++;
    }
    mx=max(mx, ln);
    cout << mx << " ";
}
