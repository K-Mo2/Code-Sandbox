#include <bits/stdc++.h>
using namespace std;

string dec_to_bin(int x, string res = ""){
    
    if(x <= 0){
        return res;
    }
    res += to_string(x % 2);
    return dec_to_bin(x / 2) + res;
}

void recurrence(int n, int i = 0){
    
    if(i >= n) return;

    int x;

    cin >> x;

    cout << dec_to_bin(x) << endl;
    
    return recurrence(n, i + 1);
} 

    
int main(){

    int n;
    cin >> n; 
    recurrence(n);
    return 0;
}
