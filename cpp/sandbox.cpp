    #include <bits/stdc++.h>
    using namespace std;

    int main(){

        long long n, k, a;
        
        cin >> n >> k >> a;

        long long nk_mod_a = (n * k) % a;
        long long nk_by_a = (n * k) / a;
        long long int_size = 2147483647;

        if(nk_mod_a != 0){
            cout << "double\n";

        } else if(abs(nk_by_a) > int_size){
            cout << "long long\n";
        
        } else {
            cout << "int\n";
        }
        return 0;
    }