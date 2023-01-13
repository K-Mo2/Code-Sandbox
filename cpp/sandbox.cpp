#include <bits/stdc++.h>
using namespace std;

void distinct_nums(){
    int n, counter=0;

    cin >> n;
    
    int arr[n];
    int pos_freq_arr[1001] = { 0 };
    int neg_freq_arr[1001] = { 0 };

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        // cout << arr[i] << " ";
        if(arr[i] >= 0){
            pos_freq_arr[arr[i]]++;
        } else {
            int temp = (arr[i] * -1);
            neg_freq_arr[temp]++;
        }
    }
    

    for (int j = 0; j < 1001; j++)
    {   
        // cout << pos_freq_arr[j] << " " << neg_freq_arr[j] << endl;
        if(pos_freq_arr[j] > 0) {
            counter++;
        }

        if(neg_freq_arr[j] > 0) {
            counter++;
        }
    }
    cout << counter << endl;
}

int main(){
            
    distinct_nums();

    return 0;
}