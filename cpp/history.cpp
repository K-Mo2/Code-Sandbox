    #include <bits/stdc++.h>
    #include <string>
    using namespace std;

    

    int bitwise_bin_calc(){

        unsigned int x, y;

        cin >> x >> y;

        cout << (x ^ y) << endl;
        
        return 0;
    }

    int bin_calc(){

        unsigned int x, y;

        cin >> x >> y;

        int binArr[3][32] = { 0 };

        int i = 0;

        while(x > 0 || y > 0){

            if(x > 0){
                binArr[0][i] = x % 2;
                x /= 2;    
            }

            if(y > 0){
                
                binArr[1][i] = y % 2;
                y /= 2;
            }
            
            i++;
        }

        for(int j = i - 1; j >= 0; j--){
            if((binArr[0][j] + binArr[1][j]) <= 1){
                binArr[2][j] = binArr[0][j] + binArr[1][j];
            } else {
                binArr[2][j] = 0;
            }
        }

        int acc = 0;
        int k = 0;

        for(int j = i - 1; j >= 0; j--){
            // cout << binArr[2][j];
            if(binArr[2][j] != 0){
                acc += (int) pow(2, k);
            }
            
            k++;
        }
        
        // cout << acc;

        cout << endl;
        return 0;
    }
    
    int main(){

        bin_calc();        
        return 0; 
    } 