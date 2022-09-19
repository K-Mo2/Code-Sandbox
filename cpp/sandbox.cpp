#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    
    int x,y;
    char op;
    cin >> x >> op >> y;

    if(op == '+'){
        cout << (x + y) << endl;
    }

    if(op == '-'){
        cout << (x - y) << endl;
    }

    if(op == '*'){
        cout << (x * y) << endl;
    }

    if(op == '/'){
        cout << x / y << endl;
    }

    
} 