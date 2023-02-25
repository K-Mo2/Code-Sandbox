#include <bits/stdc++.h>
using namespace std;

long long arr_input(long long arr[], long long sum, int len, int i){
    
    if(i > (len - 1)){
        return sum;
    }

    cin >> arr[i];
    
    sum += arr[i];

    return arr_input(arr, sum, len, ++i);
}

int main(){

    int n;
    cin >> n;
    long long arr[n];
    cout << arr_input(arr, 0, n, 0) << endl;
    return 0;
}
