#include <bits/stdc++.h>
using namespace std;

bool isValid(string s){
    
    unordered_map<char, char> umap = {
        {'(', ')'},
        {'[', ']'},
        {'{', '}'},
    };
    
    stack<char> st;
    int len = s.size();
    
    for (int i = 0; i < len; i++)
    {
        char c = s[i];

        if(c == '(' || c == '[' || c == '{'){
            
            st.push(c);
            
        } else {
            
            if(st.empty()){
            
                return false;
            
            } else {
                
                char top = st.top();
                
                if(c == umap[top]){
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        
    }
    
    
    if (st.empty())
    {
        return true;
    } 
    
    return false;
}

int main(){
    
    string s;
    
    cin >> s;

    isValid(s) ? cout << "true\n" : cout << "false\n";
    return 0;
}