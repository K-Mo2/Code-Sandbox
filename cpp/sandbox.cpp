    #include <bits/stdc++.h>
    #include <string>
    using namespace std;

    int main(){

        long long a, b, c, d;

        cin >> a >> b >> c >> d;


        if(a + b - c == d){
            cout << "YES\n";
        }


        else if(a + (b * c) == d){
            cout << "YES\n";
        }

        else if(a - b + c == d){
            cout << "YES\n";
        }

        else if(a - (b * c) == d){
            cout << "YES\n";
        }

        else if((a * b) + c == d){
            cout << "YES\n";
        }

        else if((a * b) - c == d){
            cout << "YES\n";
        
        } else {
            cout << "NO\n";
        }

    } 