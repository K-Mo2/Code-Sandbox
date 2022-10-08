    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int n, x, temp=0;

        cin >> n;

        while(n){
            
            cin >> x;

            if(x > temp){
                temp = x;
            }
            n--;
        }

        cout << temp << endl;        
        return 0;
    }