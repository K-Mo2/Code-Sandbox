#include <bits/stdc++.h>
using namespace std;
    
    void always_fight(){
        
        int x,y, res;

        cin >> x >> y;

        res = (x % 10) * 10 + (y % 10);
        res *= 5;

        if(res % 2 == 0){
            cout << res << endl;
            cout << "Hossam\n";
        } else {
            cout << res << endl;
            cout << "Desouky\n";
        }
    }

    void sumOfFour(){
        int a, b, c, d, sum = 0;

        cin >> a >> b >> c >> d;

        if(a % 2 == 0){
            sum += a % 10;
        } else {
            sum += (a % 10) * -1;
        }

        if(b % 2 == 0){
            sum += b % 10;
        } else {
            sum += (b % 10) * -1;
        }

        if(c % 2 == 0){
            sum += c % 10;
        } else {
            sum += (c % 10) * -1;
        }

        if(d % 2 == 0){
            sum += d % 10;
        } else {
            sum += (d % 10) * -1;
        }

        cout << sum << endl;
    }


    void final_compare(){
        long double x, y;

        cin >> x >> y;
        
        if(x == y){
            cout << "Both\n";
            return;
        }

        if(x == 1){
            cout << "Hazem\n";
            return;
        }

        if(y == 1){
            cout << "Wael\n";
            return;
        }

        if(x > y){
            cout << "Hazem\n";
            return;
        } 

        if(x < y){
            cout << "Wael\n";
            return;
        } 


    }

    void fourth_gen(){
        long long a, b, c, d;
        long long res;


        cin >> a >> b >> c >> d;

        res = (a * b * c * d);

        cout << res << endl;
    }

    void mariaAndAli(){
        unsigned long long x;

        cin >> x;

        if(x % 2 == 0){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    void logic_case(){
        long long x,y, sum = 0;

        cin >> x >> y;

        if(x > y){
            sum = ((x * ( x - 1 )) / 2) - ((y * (y + 1)) / 2);
        } else {
            sum = ((y * ( y - 1 )) / 2) - ((x * (x + 1)) / 2);
        }

        cout << sum << endl;
    }

    void wegz_help(){
        
        long long a,b,x,y;

        cin >> a>> b >> x >> y;

          int c = abs(min(a, b) - min(x, y)) + abs(max(a, b) - max(x, y));
          cout << (c > abs(b - a) ? abs(b - a) : c);

    }

    void itIt001(){
        int n,m;
        string s;

        cin >> n >> s >> m;

        if(s == ">"){
            n > m ? cout << "Right\n" : cout << "Wrong\n";
        } 

        if(s == "<"){
            n < m ? cout << "Right\n" : cout << "Wrong\n";
        } 

        if(s == "="){
            n == m ? cout << "Right\n" : cout << "Wrong\n";
        } 
    }

    void stones(){
        int n;

        cin >> n;

        n == 1 ? cout << 1 << endl : cout << 2 << endl; 
        
    }

    void kg2(){
        int n;

        cin >> n;

        cout << (n * (n + 1) / 2) << endl;
    }

    void hazem_task(){
        char l;

        cin >> l;

        l < 97 ? cout << char(l + 32) : cout << char(l - 32);
        cout << endl;
    }

    void amazing_cave(){
        int x;

        cin >> x;

        if(x % 10 == 4 || x % 10 == 7){
            cout << "lucky";
        } else {
            cout << "unlucky";
        }

        cout << " ";

        if(x % 2 == 0){
            cout << "even";
        } else {
            cout << "odd";
        }

        cout << endl;
    }
    int main(){
        
        amazing_cave();
 
        return 0;
    }