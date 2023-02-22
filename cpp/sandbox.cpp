#include <bits/stdc++.h>
using namespace std;
 
int print_to_n(int n, int i){
    
    cout << i << endl;
    
    if(i == n) return i;
    
    return print_to_n(n, i + 1);
}
    
int main(){

    int n, i = 1;
    cin >> n; 
    print_to_n(n, i);
    return 0;
}
