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

    int main(){

        int x, len;
        
        cin >> x;

        len = num_len(x);

        isPalindrome(x, len) ? cout << "YES\n" : cout << "NO\n";

        return 0;
    }