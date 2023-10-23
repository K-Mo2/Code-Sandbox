#include <bits/stdc++.h>
using namespace std;

string guess_what(double n, double k, double a){
    
    double res = (n * k) / a; 
    if(ceil(res) != floor(res)) return "double\n";

   if(res > 2147483648 || res < -2147483648){
    return "long long\n";
   } else {
    return "int\n";
   }
}

int main(){
    double n, k, a;
    cin >> n >> k >> a;
    cout << guess_what(n, k, a) << endl;
    return 0;
}