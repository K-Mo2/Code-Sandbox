    #include <bits/stdc++.h>
    using namespace std;

    int main(){

        int n, d1, d2;

        cin >> n;

        d1 = n % 10;
        n /= 10;

        d2 = n % 10;
        n /= 10;

        if(d1 % d2 == 0){
            cout << "YES\n";
        } else if(d2 % d1 == 0){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        return 0;
    }