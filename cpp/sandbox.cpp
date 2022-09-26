    #include <bits/stdc++.h>
    #include <string>
    using namespace std;

    void decToBin(int n){

        int binArr[32];
        int i = 0;

        while(n > 0){
            binArr[i] = n % 2;
            n /= 2;
            i++;
        }

        for(int j = i - 1; j >= 0; j--){
            cout << binArr[j];
        }
    }

    int main(){
        int n;
        cin >> n;
        decToBin(n);
        cout << endl;   
        return 0; 
    } 