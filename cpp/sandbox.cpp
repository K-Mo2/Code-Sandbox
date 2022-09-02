#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;
// string check_secret_word();

 int firstUniqChar(string s) {
        
        int n = s.length();
        vector <int> rep_arr(n, 0);

        for(int i = 0; i < n ; i++){
            for(int j = 0; j < n; j++){
            
            if(s[i] == s[j]) rep_arr[i]++;
            
            }
        }
        
         for(int i = 0; i < n; i++){
            cout << rep_arr[i] << endl;
            if(rep_arr[i] == 1) return i;
         }

        return -1;
    
    }

int main(void){

    
    cout << firstUniqChar("aabb") << endl;    
    
    return 0;
}


string check_secret_word(){
    // Get the secret word from the user
    string secret_word;
    cout << "Enter the secret word:" << endl;
    cin >> secret_word;
    
    // array of the secret word    
    int secret_arr_len = secret_word.length();
    string secret_arr[secret_arr_len];

    // Create the secret word array
    for(int i = 0; i < secret_arr_len; i++) {
        
        secret_arr[i] = tolower(secret_word[i]);
    }

    // Get the guess of the secret word
    string user_input;
    cout << "Guess the word:" << endl;
    cin >> user_input;

    int input_arr_len = user_input.length();
    string input_arr[input_arr_len];

    for(int i = 0; i < input_arr_len; i++) {
        
            input_arr[i] = tolower(user_input[i]);
    }


    string letters_match_arr[secret_arr_len];
    string supported_letters_arr[secret_arr_len];
    
    for(int i = 0; i < secret_arr_len; i++) {
        letters_match_arr[i] = '_';
        supported_letters_arr[i] = '_';
    }

    for(int i = 0; i < secret_arr_len; i++){
        for(int j = 0; j < input_arr_len; j++) {
            if(secret_arr[i] == input_arr[i]) {
                letters_match_arr[i] = secret_arr[i];
            }

            if(secret_arr[i] == input_arr[j]) {
                supported_letters_arr[i] = input_arr[j];
            }
        }
    }

    if(secret_word.compare(user_input) == 0){
        cout << "Words Match!" << endl;
        return "Words Match!";
    } else {
        cout << "Ops!, Try again!" << endl;
        cout << "Letters match:" << endl << '[';
        for(int i = 0; i < secret_arr_len; i++) {
            cout << letters_match_arr[i];

            if(i < secret_arr_len - 1){
                cout << ',';
            }
        }
        
        cout << ']' << endl << "Supported Letters:" << endl << "[";
        for(int i = 0; i < secret_arr_len; i++) {
            cout << supported_letters_arr[i];

            if(i < secret_arr_len - 1){
                cout << ',';
            }
        }
        
        cout << ']' << endl;
        
        return "Ops!, Try again!";
    }
    
    
}


