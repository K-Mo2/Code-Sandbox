#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){

    int x, y, z;

    cin >> x >> y >> z;

    int arr[3] = {x, y, z};
    int arr_cpy[3];
    copy(begin(arr), end(arr), begin(arr_cpy));
    
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);


    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

    cout << endl;

    for(int i = 0; i < n; i++){
        cout << arr_cpy[i] << endl;
    }
    
} 