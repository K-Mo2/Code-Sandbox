#include <bits/stdc++.h>
using namespace std;

int digits(int x, int len){
    
    int res = 0; 
    
    if(len - 1 <= 0){
        return x;
    } 
    
    res = x / int(pow(10, (len - 1)));
    x %= int(pow(10, (len - 1)));
    
    cout << res << " ";

    return digits(x , len - 1);
}

void recurrence(int n, int i = 0){
    
    if(i >= n) return;

    int x, len;

    cin >> x;

    len = floor(log10(x) + 1);

    cout << digits(x, len) << endl;
    
    return recurrence(n, i + 1);
} 

    
int main(){

    int n;
    cin >> n; 
    recurrence(n);
    return 0;
}
