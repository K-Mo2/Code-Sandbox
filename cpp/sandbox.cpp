#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){

    long long a, b, c, d;
    long long result;
    int d1, d2;
    cin >> a >> b >> c >> d;

    a = a % 1000;
    b = b % 1000;
    c = c % 1000;
    d = d % 1000;

    result = (a * b *c *d);
    // cout << result << endl;
    d1 = result % 10;
    result /= 10;
    
    d2 = result % 10;
    
    cout << d2 << d1 << endl;
    
} 