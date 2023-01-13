#include <bits/stdc++.h>
using namespace std;

void shift_zeros(){
    int n;

    cin >> n;
    int arr[n];
    int new_arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != 0){
            new_arr[j] = arr[i];
            j++;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0){
            new_arr[j] = arr[i];
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << new_arr[i] << " ";
    }
    
    cout << endl;
}

int main(){
            
    shift_zeros();

    return 0;
}