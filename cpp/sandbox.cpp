#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){

    long long l1, r1, l2, r2;

    cin >> l1 >> r1 >> l2 >> r2;

    if(l2 > r1 || r2 < l1){
        cout << "-1\n";
        return 0;
    }

    if(l2 >= l1 && r2 <= r1){
        cout << l2 << " " << r2; 
        cout << endl;
        return 0;
    } 

    if(l2 <= l1 && r2 >= r1){
        cout << l1 << " " << r1; 
        cout << endl;
        return 0;
    } 

    if(l2 > l1 && r2 > r1){
        cout << l2 << " " << r1; 
        cout << endl;
        return 0;
    } 

    if(l2 < l1 && r2 < r1){
        cout << l1 << " " << r2; 
        cout << endl;
        return 0;
    } 

    if(l2 < l1 && r2 < r1){
        cout << l1 << " " << r2; 
        cout << endl;
        return 0;
    } 

} 