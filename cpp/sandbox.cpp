#include <bits/stdc++.h>
    using namespace std;
 
    bool isPrime(int n){
        
        if(n == 0 || n == 1) return false;

        for(int i = 2; i*i <= n; i++){
            cout << i << " " << n << endl;
            if(n % i == 0) return false;
        }
        return true;
    }
 
    int main(){
 
        int x;
        
        cin >> x;
        for(int i = 1; i <= x; i++){
            if(isPrime(i)){
                // cout << i << " ";
            }
        }
 
        return 0;
    }