#include <bits/stdc++.h>
using namespace std;
 
string dec_to_bin(int n, string res=""){

    if(n == 0) return res;
    
    res = to_string(n % 2) + res;

    return dec_to_bin(n / 2, res);
}
    
int main(){

    int n;
    cin >> n;
    cout << dec_to_bin(n) << endl;
    return 0;
}
