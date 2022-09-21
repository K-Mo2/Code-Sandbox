#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){

    int a,b, c;
    char s, q;

    cin >> a >> s >> b >> q >> c;
    
    if(q != '=') return 0;
    
    if(s == '+'){
        if(a + b == c) cout << "Yes\n"; else cout << a + b << endl;
    }

    if(s == '-'){
        if(a - b == c) cout << "Yes\n"; else cout << a - b << endl;
    }

    if(s == '*'){
        if(a * b == c) cout << "Yes\n"; else cout << a * b << endl;
    }
} 