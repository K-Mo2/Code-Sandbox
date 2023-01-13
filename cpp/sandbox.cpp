#include <bits/stdc++.h>
using namespace std;

void shift_zeros(){
    int n;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i] != 0){
            cout << arr[i] << " ";
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0){
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}

int main(){
            
    shift_zeros();

    return 0;
}