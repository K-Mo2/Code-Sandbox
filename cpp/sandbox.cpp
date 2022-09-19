#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){

    int age, years, months, days;

    cin >> age;

    years = age / 365;

    age -= (years * 365);

    months = age / 30;

    age -= (months * 30);

    days = age;

    cout << years << " years\n";
    cout << months << " months\n";
    cout << days << " days\n";
    

    
} 