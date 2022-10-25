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

    void divisibleByX(){
        long long a,b,x, res;

        cin >> a >> b >> x;
        
        res = abs((a / x) - (b / x));

        if(min(a,b) % x == 0) res++; 

        cout << res << endl;
    }

    long long distance(long long x1, long long y1, long long x2, long long y2){
        long long res = 0;

        return res = pow((x1 - x2), 2) + pow((y1 - y2), 2);
    }

    void the_maze(){
        long long xi, yi, x1, y1, x2, y2, x3, y3, res1, res2, res3;

        cin >> xi >> yi;

        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        res1 = distance(xi, yi, x1, y1);
        
        res2 = distance(xi, yi, x2, y2);
        
        res3 = distance(xi, yi, x3, y3);

        if(res1 < res2 && res1 < res3){
            cout << res1 << endl;
            cout << x1 << " " << y1 << endl;
        }
        
        if(res2 < res1 && res2 < res3){
            cout << res2 << endl;
            cout << x2 << " " << y2 << endl;
        }
        
        if(res3 < res1 && res3 < res2){
            cout << res3 << endl;
            cout << x3 << " " << y3 << endl;
        }

    }

    void chess_master(){
        string x;

        cin >> x;

        if((x[0] == 'a' || x[0] == 'h') || (x[1] == '1' || x[1] == '8')){
            
            cout << "7\n";
        
        } else if(((x[0] == 'b' || x[0] == 'g') && (x[1] != '1' || x[1] != '8')) || ((x[1] == '2' || x[1] == '7') && (x[0] != 'a' || x[0] != 'h'))){
            
            cout << "9\n";

        } else if(((x[0] == 'c' || x[0] == 'f') && (x[1] != '1' || x[1] != '2' || x[1] != '7' || x[1] != '8')) || ((x[1] == '3' || x[1] == '6') && (x[0] != 'a' || x[0] != 'b' || x[0] != 'g' || x[0] != 'h'))){

            cout << "11\n";

        } else if((x[0] == 'd' || x[0] == 'e') && (x[1] == '4' || x[1] == '5')){

            cout << "13\n";

        }
    }

    bool isPrime(long long n){
        
        if(n == 1) return false;

        for(int i = 2; i*i <= n; i++){
            if(n % i == 0) return false;
        }

        return true;
    }

    void chicken_wings(){
        long long x, y;
        int price = 0;
        int sum = 0;

        cin >> x >> y;

        for(int i = x; i <= y; i++ ){
            if(isPrime(i)){
                price++;
                sum += i;
            }
        }

        cout << sum << " " << price << endl;

    }

    void divisors(){
        int n;

        cin >> n;

        if(isPrime(n)){
            cout << "1\n" << n << endl;
        
        } else {

            for(int i = 1; i <= n; i++){
                if(n % i == 0){
                    cout << i << endl;
                }
            }
        }

    }

    int main(){

        divisors();

        return 0;
    }