#include <bits/stdc++.h>
using namespace std;

double area(int a, int b, int c, int d){
 double x = c * b;
 double y = d * (a-c);
 double z = ((a-c) * (b-d)) / 2.0;
 double res = x + y + z;
 return res;
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << fixed << setprecision(6) << area(a, b, c, d) << endl;
    return 0;
}