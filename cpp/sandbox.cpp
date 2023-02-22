#include <bits/stdc++.h>
using namespace std;
 
bool isPalindrome(string s){
    int len = s.length();

    if(len == 0 || len == 1){
        return true;
    }

    if(s[0] == s[len - 1]){
        return isPalindrome(s.substr(1, len - 2));
    }
    
    return false;
}
    
int main(){
    string s;
    cin >> s;
    // cout << isPalindrome(s) << endl;
    isPalindrome(s) ? cout << "True\n" : cout << "False\n";
    return 0;
}
