#include <bits/stdc++.h>
using namespace std;

int main(){
    
int x, y, z, min, max;

cin >> x >> y >> z;

int arr[] = { x, y, z };
int n = sizeof(arr) / sizeof(arr[0]);

min = arr[0];
max = arr[0];

for(int i = 0; i < n; i++){
    if(arr[i] < min){
        min = arr[i];
    } 
    
    if(arr[i] > max){
        max = arr[i];
    } 
    
}

    cout << min << " " << max << endl;
} 