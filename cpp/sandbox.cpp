#include <bits/stdc++.h>
using namespace std;
 
int print_n_to_1(int n){
    
    (n == 1) ? cout << n : cout << n << " ";
    
    if(n == 1) return n;
    
    return print_n_to_1(n - 1);
}
    
int main(){

    int n;
    cin >> n; 
    print_n_to_1(n);
    // cout << endl;
    return 0;
}
