    #include <bits/stdc++.h>
    using namespace std;

    int num_len(int n){
       
       int len = 0;

       while(n > 0){
        n /= 10;
        len++;
       }
       
       return len; 
    }

    bool isPalindrome(int x, int len){
        
        int fd, ld;

        for(int i = 1; i <= floor(len / 2); i++){
            
            fd = x / pow(10, len - ((i * 2) - 1));
            ld = x % 10;

            x /= 10;
            x %= (int) pow(10, len - (i * 2));
            
            if(fd != ld) return false;
            
        }

        return true;

    }

    int reverse_num(int n){
        int temp = 0, reverse = 0, len = 0;

        len = num_len(n);

        temp = n;

        while(temp){
            reverse += (temp % 10) * (int) pow(10, len - 1);
            temp /= 10;
            len--;
        }

        return reverse;
    }

    int main(){

        int x, len;
        
        cin >> x;

        len = num_len(x);

        cout << reverse_num(x) << endl;
        isPalindrome(x, len) ? cout << "YES\n" : cout << "NO\n";

        return 0;
    }