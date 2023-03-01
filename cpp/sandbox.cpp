#include <bits/stdc++.h>
using namespace std;

string num_to_money(string s){
    int len = s.length();

    for (int i = len-1; i >= 0; i-=3)
    {
        if(i == len-1) continue;
        s.insert(i+1,",");
    }
    return s;
}

string num_to_money_recur(string s, int len, int i){    

    if(i < 0){
        return s;
    }
    
    if(i < len - 1){
        s.insert(i+1, ",");
    }
    return num_to_money_recur(s, len, i-3);
}

int main(){
    
    double decimal;
 
    cin >> decimal;
 
    int integer =  decimal;
    double fraction = (decimal - (double)(integer)); 
    string s = to_string(integer);
    int len = s.length();
 
    string s1 = num_to_money(s);
    s1 += to_string(fraction).substr(1);
 
    string s2 = num_to_money_recur(s, len-1, len-1);
    s2 += to_string(fraction).substr(1);

    cout << s1 << endl << s2 << endl;

    return 0;
}