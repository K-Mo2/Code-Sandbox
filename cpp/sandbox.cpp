#include <bits/stdc++.h>
using namespace std;

string digits(string s, int i = 0, string res = ""){
    
    int len = s.length();
    
    if(i >= (len - 1)){
        res.push_back(s[i]);
    } else {

     res.push_back(s[i]);
     res.push_back(' ');
    }
    
    if(i >= (len - 1)) return res;
    
    return res + digits(s, i + 1);
}

void recurrence(int n, int i = 0){
    
    if(i >= n) return;
    
    string s;

    cin >> s;

    cout << digits(s);
    cout << endl;
    return recurrence(n, i + 1);
} 

    
int main(){

    int n;
    cin >> n; 
    recurrence(n);
    
    return 0;
}
