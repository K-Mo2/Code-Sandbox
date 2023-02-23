#include <bits/stdc++.h>
using namespace std;

void digits(string s, int i = 0){
    
    int len = s.length();
    i == (len - 1) ? cout << s[i] : cout << s[i] << " " ;
    if(i >= (len - 1)) return;
    
    return digits(s, i + 1);
}

void recurrence(int n, int i = 0){
    
    if(i >= n) return;
    
    string s;

    cin >> s;

    digits(s);
    cout << endl;
    return recurrence(n, i + 1);
} 

    
int main(){

    int n;
    cin >> n; 
    recurrence(n);
    
    return 0;
}
