#include <bits/stdc++.h>
using namespace std;
 
int print_recursion(int n){

    if(n > 0){
        cout << "I love Recursion" << endl;        
        return print_recursion(n-1);
    } 

    return 0;
}
    
int main(){
    int n;
    cin >> n;
    print_recursion(n);
    
    return 0;
}
