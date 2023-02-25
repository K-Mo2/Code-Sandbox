#include <bits/stdc++.h>
using namespace std;

int count_vowels(string s, int n, int len, int i = 0){
    
    if(i > (len - 1)){
        return n;
    }

    char c = tolower(s[i]);
    
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        ++n;
    }

    return count_vowels(s, n, len, ++i);
}

int main(){

    string s;
    getline(cin, s);
    int len = s.length();
    cout << count_vowels(s, 0, len, 0) << endl;
    return 0;
}
