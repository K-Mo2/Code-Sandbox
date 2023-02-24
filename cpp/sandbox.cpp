#include <bits/stdc++.h>
using namespace std;

string even_indices(int arr[], string s2, int len, int i){
    
    if(i < 0){
        return s2;
    }
    if(i % 2 == 0){
        cout << arr[i] << " ";
    }
    return even_indices(arr, s2, len, i - 1);
}

int* recurrence(int n, int i, int arr[]){
    

    if(i >= n){
        return arr;
    }
    
    cin >> arr[i];
    
    return recurrence(n, i + 1, arr);
} 

    
int main(){

    int n;
    cin >> n; 
    int arr[n];
    int* res = recurrence(n, 0, arr);
    cout << even_indices(res, "", n, n - 1) << endl;
    return 0;
}
