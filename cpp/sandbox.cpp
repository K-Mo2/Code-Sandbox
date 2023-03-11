#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int romanToInt(string s){
    
    int sum = 0;
    int n = s.size();

    unordered_map<char, int> mp{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
    };

    for (int i = 0; i < n; i++)
    {
        if(mp[s[i]] < mp[s[i+1]]) sum -= mp[s[i]];
        
        if(mp[s[i]] >= mp[s[i+1]]) sum += mp[s[i]];
    }
    
    return sum;
}

int main(){
    
    string s;
    cin >> s;

    cout << romanToInt(s) << endl;

    return 0;
}