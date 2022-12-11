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

    void GCD(){
        int a, b;

        cin >> a >> b;

        if(a < b){
            for(int i = a; i > 0; i--){
                if(a % i == 0 && b % i == 0){
                    cout << i << endl;
                    return;
                }
            }
        } else {
            for(int i = b; i > 0; i--){
                if(a % i == 0 && b % i == 0){
                    cout << i << endl;
                    return;
                }
            }
        }

    }

    int euclidean_gcd(int a, int b){
        return b == 0 ? a : euclidean_gcd(b, a % b);
    }

    bool isLucky(int x){
        for(int i = x; i > 0; i /= 10){
            if((i % 10) != 4 && (i % 10) != 7) return false;
        }

        return true;
    }

    void lucky_numbers(){
       int a, b, i;
       bool lucky_numbers_exist = false;

       cin >> a >> b;
       i = a;
       while(i <= b){
        if(isLucky(i)){
            lucky_numbers_exist = true;
            cout << i << " ";
        }
        
        if(i % 10 == 4) i += 3;
        else if (i % 10 == 7) i += 7;
        else i++;
       
       }

       if(!lucky_numbers_exist) cout << "-1\n";
       else cout << endl;
    }

    int numbers_histogram(){
        char s;
        int n;

        cin >> s >> n;
        
        int x[n];

        for(int i = 0; i < n; i++){
            
            cin >> x[i];
        }

        for(int i = 0; i < n; i++){
            
            for(int j = 0; j < x[i]; j++){
                
                cout << s;
            }

            cout << endl;
        }
        
        return 0;
    }

    void pyramid(){
        int n;

        cin >> n;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < i + 1; j++){
                cout << "*";
            }
            cout << endl;
        }
    }

    void shape1(){
        int n;

        cin >> n;

        for(int i = n; i > 0; i--){
            for(int j = i; j > 0; j--){
                cout << "*";
            }
            cout << endl;
        }
    }
    
    void digits(){
        int n;

        cin >> n;

        int x[n];

        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            if(x[i] == 0) cout << 0;
            
            while(x[i]){
                cout << x[i] % 10 << " ";
                x[i] /= 10;
            }

            cout << endl;
        }

    }

    void sequence_sum(){
        int n, m;

        do {
            int acc = 0;
            cin >> n >> m;
            if(n <= 0 || m <= 0) break;
            if(n > m){
                for(int k = m; k <= n; k++){
                cout << k << " ";
                acc += k;
            }
            cout << "sum =" << acc << endl;
            } else {
                for(int k = n; k <= m; k++){
                cout << k << " ";
                acc += k;
            }
            cout << "sum =" << acc << endl;
            } 
        } while(n > 0 && m > 0);

    }


    void sum_of_odd_nums(){
        int n, x, y;

        cin >> n;

        while(n){
            cin >> x >> y;
            int sum = 0;
            for(int i = min(x, y) + 1; i < max(x, y); i++){
                if(i % 2 != 0){
                    sum += i;
                }
            }
            cout << sum << endl;
            n--;
        }
    }

    void three_nums(){
     int k, s, counter = 0;

     cin >> k >> s;

    if(k > s) k = s;
    
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if((i + j) > s) break;
            if(s - (i + j) <= k) counter++;
            
        }
        
    }
    
    cout << counter << endl;

    }

    void weird_algorithm(){
        long long n;

        cin >> n;
        while(n > 1){

            cout << n << " ";

            if(n % 2 ==0) n /= 2;
            else  n = (n * 3) + 1;

        }
            cout << n;
            cout << endl;
    }

    void missing_number(){
        int n, temp, i;

        cin >> n;
        int arr[n] = { 0 };
        i = n - 1;
        while(i){
            cin >> temp;
            arr[temp - 1]++;
            i--;
        }
        
        for (int i = 0; i < n; i++)
        {
            // cout << arr[i] << endl;
            if(arr[i] == 0){
                cout << (i + 1) << endl;
            }
        }
        
    }

    void repetitions(){
        string s;
        int counter=0, temp=1;
        cin >> s;

        int n = s.length();
        
        for (int i = 0; i < n; i++)
        {   
             if(s[i] == s[i+1]) temp++;
             if(temp > counter) counter = temp;
             if(s[i] != s[i+1]) temp = 1;

        }

        cout << counter << endl;
    }

    void increasing_arr(){
        long long n, counter=0;

        cin >> n;
        
        long long arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if(arr[i] > arr[i+1]){
                int diff = 0;
                diff = arr[i] - arr[i+1];
                arr[i+1] += diff;
                counter += diff;
            }
                        
        }
                
        cout << counter << endl;
    }

    void permutations(){
        int n;

        cin >> n;

        int arr[n];

        if(n == 1){
            cout << 1;
            return;
        }

        if(n <= 3){
            cout << "NO SOLUTION\n";
            return;
        }

        for (int i = 1; i <= n; i++)
        {
             arr[i] = i;
        }

        for (int i = 2; i <= n; i+=2)
        {
            cout << i << " ";
        }

        for (int i = 1; i <= n; i+=2)
        {
            cout << i << " ";
        }
        
        cout << endl;
    }

    void palindrome_array(){
        int n;
        bool palindrome = true;

        cin >> n;

        long long arr[n];
        
        int i = 0;
        
        while(i < n){
            cin >> arr[i];
            i++;
        }

        for (int j = 0; j < ceil(n/2); j++)
        {
            if(arr[j] != arr[(n-1)-j]) palindrome = false;
        }
        
        if(palindrome){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    void smallest_pair(){
        int t;

        cin >> t;

        while(t){
            long long smallest = pow(10, 9);
            int n, i=0;
            cin >> n;
            long long arr[n];
            
            while (i < n)
            {
                cin >> arr[i];
                i++;
            }
            
            for(long long i = 0; i < n - 1; i++)
            {
                for (long long j = i + 1; j < n ; j++)
                {   
                    if((arr[i] + arr[j] + j - i) < smallest){
                        smallest = arr[i] + arr[j] + j - i;
                    }
                }
                
            }
            
            cout << smallest << endl;    
            
            t--;
        }

    }

    void max_sub_arrays(){
        int t;

        cin >> t;
    
        while(t){
            int n;

            cin >> n;

            long long arr[n];
            int i=0;

            while (i < n)
            {
                cin >> arr[i];
                i++;
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = i; j < n; j++)
                {   
                    long long max= -pow(10, 9);

                    for (int k = i; k <= j; k++)
                    {
                        if(arr[k] > max) max = arr[k];
                    }

                    cout << max << " ";
                }

            }

            cout << endl;
            t--;
        }
    }

    void check_code(){
        int a,b;
        string s;
        bool isValid = true;

        cin >> a >> b >> s;

        if(s[a] != '-') isValid = false;

        for (int i = 0; i < s.length(); i++)
        {
            if(i != a && (s[i] < '0' || s[i] > '9')){
                isValid = false;
            }
        }

        if(s.length() != (a + b + 1)) isValid = false;
        
        isValid ? cout << "Yes\n" : cout << "No\n";

        
    }

    void minimize_number(){
        unsigned int n, a, ops_num=0;
        bool isEven = true;

        cin >> n;

        unsigned int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

    ops:
        for (int j = 0; j < n; j++)
        {
            if(arr[j] % 2 != 0){
                isEven = false;
                break;
            } else {
                arr[j] /= 2;
            }

        }

        if(isEven){
            ops_num++;
            goto ops;
        }

        cout << ops_num << endl;
        
        
    }

    void count_sub_arrays(){
        int t, n;
        
        cin >> t;


        while(t){
            int counter=0;
            cin >> n;

            int arr[n];

            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    for (int l = j; l <= k; l++)
                    {   
                        if(arr[l] > arr[l+1] && l < k) break;
                        if(l == k) counter++;
                    }
                    
                }
                
            }
            
            cout << counter << endl;
            t--;            
        }

    }

    void permutation_arrays(){
        unsigned int n;
        bool isValid = true;
        
        cin >> n;

        unsigned int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if(a[j] > a[j+1]){
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }

                if(b[j] > b[j+1]){
                    int temp = b[j];
                    b[j] = b[j+1];
                    b[j+1] = temp;
                }
            }
        }
                
        for (int i = 0; i < n; i++)
        {
            if(a[i] != b[i]) isValid = false;
        }

        isValid ? cout << "yes\n" : cout << "no\n";
        
    }

    void is_b_sequence_of_a(){
        unsigned int n, m;

        cin >> n >> m;

        long long a[n], b[m];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        unsigned int sI=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] == b[sI]) sI++;
        }

        (sI == m) ? cout << "YES\n" : cout << "NO\n";
        
    }

    void frequency_array(){
        int n, m;

        cin >> n >> m;

        int arr[n], freqArr[m+1] = { 0 };
    
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if(arr[i] <= m){
                freqArr[arr[i]]++;
            }
        }

        for (int i = 1; i <= m; i++)
        {   
            cout << freqArr[i] << endl;
        }
        
        
    }

    void mirror_array(){
        int n, m;

        cin >> n >> m;

        unsigned int arr[n][m], mirror_arr[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
            
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = m-1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    void eight_neighors(){
        int n, m, x, y;
        bool isValid = true;

        cin >> n >> m;

        char arr[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
            
        }
        
        cin >> x >> y;
        
        x--;
        y--;

        int x1, y1, x2, y2;

        x1 = (x - 1) < 0 ? 0 : (x - 1);
        y1 = (y - 1) < 0 ? 0 : (y - 1);
        
        x2 = x + 1;
        y2 = y + 1;
        
        for (int i = x1; i <= x2 && i < n; i++)
        {
            for (int j = y1; j <= y2 && j < m; j++)
            {
                if((i != x || j != y) && arr[i][j] != 'x') isValid = false; 
                
            }
        }
        
        isValid ? cout << "yes\n" : cout << "no\n";
    }
    
    void range_sum_query(){
        unsigned int n, q, l, r;

        cin >> n >> q;

        unsigned int arr[n];
        long long sum_arr[n] = { 0 };

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            if(i == 0){
                sum_arr[i] = arr[i];
            } else {
                sum_arr[i] = sum_arr[i-1] + arr[i];
            }
        }
        
        for (int j = 0; j < q; j++)
        {
            cin >> l >> r;
            l--;
            r--;
        
            long long sum=0;
            
            if(l > 0){
                sum = sum_arr[r] - sum_arr[l-1];    
            } else {
                sum = sum_arr[r];    
            }

            cout << sum << endl;   
        }
        
        
    }

    
    long long binary_search_algorithm(long long arr[], long long x, long long low, long long high ){
        
        while(low <= high){
            long long mid = low + (high - low);

            if(arr[mid] == x) return mid;
            else if(arr[mid] > x) high = mid - 1;
            else if(arr[mid] < x) low = mid + 1;
        }
        return -1;
    }

    void binary_search(){
        int n, q;

        cin >> n >> q;

        long long arr[n];

        for (int i = 0; i < n; i++)
        {   
            cin >> arr[i];
        }

        sort(arr, arr + n);
        
        for (int i = 0; i < q; i++)
        {
            long long x;
            cin >> x;

            // cout << binary_search_algo(arr, x, 0, n-1) << endl;
            (binary_search_algorithm(arr, x, 0, n-1) != -1) ? cout << "found\n" : cout << "not found\n";
        }
        
    }

    void create_new_string(){
        string s, t;

        cin >> s >> t;

        int i;
        for ( i = 0; s[i] != '\0'; i++)
        ;
        
        int j;
        for ( j = 0; t[j] != '\0'; j++)
        ;
        cout << i << " " << j << endl;
        cout << s << " " << t << endl;
        
    }

    void conversion(){
        string s;

        cin >> s;
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            if(s[i] >= 65 && s[i] <= 90) s[i] += 32;
            else if(s[i] >= 97 && s[i] <= 122) s[i] -= 32;
            else if(s[i] == 44) s[i] -= 12;
        }
        
        for (int i = 0; i < n; i++)
        {
            cout << s[i];
        }

        cout << endl;
        
    }

    void string_funcitons(){
        int n, q;
        string s;

        cin >> n >> q >> s;

        for (int i = 0; i < q; i++)
        {
            string query;

            cin >> query;

            if(query == "pop_back"){
                s.pop_back();
            }

            if(query == "front"){
                cout << s[0] << endl;
            }

            if(query == "back"){
                cout << s[s.length()-1] << endl;
            }

            if(query == "sort"){
                int l, r;
                cin >> l >> r;
                if(l > r) swap(l, r);
                l--;
                sort(s.begin() + l, s.begin() + r);
            }

            if(query == "reverse"){
                int l, r;
                cin >> l >> r;
                if(l > r) swap(l, r);
                l--;
                reverse(s.begin() + l, s.begin() + r);
            }

            if(query == "print"){
                int pos;
                cin >> pos;
                pos--;
                cout << s[pos] << endl;
            }
            
            if(query == "substr"){
                int l, r, n;
                cin >> l >> r;
                if(l > r) swap(l, r);
                l--;                
                string sub_string = s.substr(l, abs(r-l));
                cout << sub_string << endl;
            }
            
            if(query == "push_back"){
                char c;
                cin >> c;
                s.push_back(c);
            }
        }
        


    }
    
    void subsequence_string(){
        string s, x = "hello";

        cin >> s;

        int j = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == x[j]) j++;
        }

        j > 4 ? cout << "YES\n" : cout << "NO\n";
        
    }

    void max_subsequence(){
        int n, counter=0;
        string s;

        cin >> n >> s;

        for (int i = 0; i < n-1; i++)
        {
            if(s[i] != s[i+1]) counter++;
        }

        cout << (counter + 1) << endl;
            
    }

    void sort_string(){
        unsigned int n;
        int s[26] = { 0 };

        cin >> n;

        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            s[c-97]++;            
        }

        for (int j = 0; j < 26; j++)
        {   
            for (int k = 0; k < s[j]; k++)
            {
                cout << ((char)(j+97));
            }
            
        }

        cout << endl;
        
    }

    void count_words(){
        string s;
        int counter = 0;
        
        getline(cin, s);

        int n = s.length();

        for (int i = 0; i < n-1; i++)
        {   
            if(((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) && ((s[i+1] == '.') || (s[i+1] == '?') || (s[i+1] == '!') || (s[i+1] == ' ') || (s[i+1] == ','))){
                counter++;
            }            
        }

        if(((s[n-1] >= 'a' && s[n-1] <= 'z') || (s[n-1] >= 'A' && s[n-1] <= 'Z'))){
                counter++;
        }

        cout << counter << endl;
        
    }

    void reverse_words(){
        string s;

        getline(cin, s);

        int n = s.length();
        int it = 0;
        for (int i = 0; i < n; i++)
        {
             if(s[i] == ' '){
                string sub = s.substr(it, i-it);
                reverse(sub.begin(), sub.end());
                cout << sub << " ";
                it = i + 1;                
            } 

            if(i == (n - 1)){
                string sub = s.substr(it, i-it+1);
                reverse(sub.begin(), sub.end());
                cout << sub;
            }

        }
        cout << endl;
    }

    int main(){
        
        reverse_words();
        
        return 0;
    }