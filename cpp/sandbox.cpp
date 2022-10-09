    #include <bits/stdc++.h>
    using namespace std;

    int main(){

        unsigned long long n, x=0, acc=0;
        
        cin >> n;

        unsigned long long arr[n] = { 0 };
        
        for(int i = 0; i < n; i++)
        {   
            cin >> x;
        
            acc = 1;
            
            for(int k = 0; k < x; k++){
                acc *= (k + 1);
            }

            cout << acc << endl;
        }

        
        return 0;
    }