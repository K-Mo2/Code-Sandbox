    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        
        long long n, m, k;
        cin >> n >> m >> k;

        long long i = 0;
        // cout << "n: " << n << " m: " << m << " k: " << k << endl;

    if(m > 0 && n > 0 && k > 0 && n < m && n < k){
        i += n;
        m -= n;
        k -= n;
        n -= n;
        // cout << "subtracted n\n";
    } 

    if(m > 0 && n > 0 && k > 0 && m < n && m < k){
        i += m;
        n -= m;
        k -= m;
        m -= m;
        // cout << "subtracted m\n";
    } 

    if(m > 0 && n > 0 && k > 0 && k < n && k < m){
        i += k;
        n -= k;
        m -= k;
        k -= k;
        // cout << "subtracted k\n";
    } 

        // cout << "n: " << n << " m: " << m << " k: " << k << endl;
    
        if(m == 0 && (n / 2) > k){
            i += k;
            n -= k;
            k -= k;
        }

        if(m == 0 && (n / 2) < k){
            i += n / 2;
            k -= n / 2;
            n -= n / 2;
        }
            
        cout << i << endl;
        return 0;
    }