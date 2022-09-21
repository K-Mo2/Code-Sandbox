#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){

    float decimal;
    int integer;
    float fraction;

    cin >> decimal;
    
    integer = decimal;

    fraction = decimal - integer;

    if(fraction == 0){
        cout << "int " << integer << endl;
    } else {
        cout << "float " << integer << " " << fraction << endl;
    }
    
} 