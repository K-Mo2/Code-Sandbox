#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    
    if(x == 1) return false;

    for (int i = 2; i*i <= x; i++)
    {
        if(x % i == 0) return false;
    }

    return true;
}

bool isPalindrome(int x){
    string temp = to_string(x);
    int n = temp.length();
    
    for (int i = 0; i < (n/2); i++)
    {   
        if(temp[i] != temp[(n-1)-i]){
            return false;
        }
    }
    
    return true;
}

int max_divs(int x){
    int counter = 0;

    for (int i = 1; i*i <= x; i++)
    {
        if(x % i == 0){
            counter++;
        }
    }
    
    if(sqrt(x) == floor(sqrt(x))){
        return ((counter*2) - 1);    
    } else {
        return (counter*2);
    }
    
}

void five_in_one(){
    int n, min = 101, max=0, prime_counter=0, palindrome_counter=0, max_div=-1, max_divs_num=-1;

    cin >> n;   
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if(arr[i] < min) min=arr[i];
        if(arr[i] > max) max=arr[i];
        if(isPrime(arr[i])) prime_counter++;
        if(isPalindrome(arr[i])) palindrome_counter++;
        
        int num_divs = max_divs(arr[i]);
        if(num_divs > max_div){
            max_div = num_divs;
            max_divs_num = arr[i];
        }
        
        if(num_divs == max_div && arr[i] > max_divs_num){
            max_divs_num = arr[i];
        }
    }

    cout << "The maximum number : " << max << endl;
    cout << "The minimum number : " << min << endl;
    cout << "The number of prime numbers : " << prime_counter << endl;
    cout << "The number of palindrome numbers : " << palindrome_counter << endl;
    cout << "The number that has the maximum number of divisors : " << max_divs_num << endl;
    
}

int main(){
            
    five_in_one();

    return 0;
}