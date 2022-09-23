#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){

    float x, p, t;

    cin >> x >> p;

    t = p / (1- (x / 100));

    cout << fixed << setprecision(2) << t << endl;

} 