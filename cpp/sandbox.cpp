#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    
    vector<string> ops = {"5", "6", "+", "9", "D", "3", "C"};
    
    int sum = 0;

    

    vector<int> result;

    for(int i = 0; i != ops.size(); ++i){
        
        if(ops[i] == "+"){
            result.push_back(stoi(ops[i - 1]) + stoi(ops[i - 2]));
        }

        if(ops[i] == "D"){
            result.push_back(stoi(ops[i - 1]) * 2);
        }

        
    }

    for(auto i: result){
        sum+= i;
    }

    cout << sum << endl;
    return 0;
}

