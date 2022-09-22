#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    double a, b, c, d;

    cin >> a >> b >> c >> d;

    double result1 = (b * log10(a));

    double result2 = (d * log10(c));
    
    if(result1 > result2){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
} 