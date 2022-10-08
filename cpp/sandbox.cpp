    #include <bits/stdc++.h>
    using namespace std;

    int main(){

        int n=0, pos=0, neg=0, odd=0, even=0, x;

        cin >> n;

        while(n){

            cin >> x;

            if(x > 0)pos++;                
            if(x < 0)neg++;
            if(x % 2 == 0)even++;
            if(x % 2 != 0)odd++;
            n--;
        } 
        cout << "Even: " << even << endl;  
        cout << "Odd: " << odd << endl;  
        cout << "Positive: " << pos << endl;  
        cout << "Negative: " << neg << endl;  
        return 0;
    }