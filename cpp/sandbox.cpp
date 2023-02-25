#include <bits/stdc++.h>
using namespace std;

int max_num(int arr[], int max, int len, int i){

    if(i >= (len - 1)) return max;

    if(arr[i] > max){
        max = arr[i];
    }

    return max_num(arr, max, len, i + 1);
}

int* recur_input(int arr[], int len, int i){
    
    if(i >= len){
        return arr;
    }

    cin >> arr[i];

    return recur_input(arr, len , i + 1);
}
    
int main(){

    int n;
    cin >> n;
    int arr[n]; 
    int* res = recur_input(arr, n, 0);
    cout << max_num(res, res[0], n, 0) << endl;
    return 0;
}
