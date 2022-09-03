#include <iostream>
#include <map>
using namespace std;

int when_is_saturday(string S);

int when_is_saturday(string S) {

    map <string, int> week { {"Sunday", 1}, { "Monday", 2}, { "Tuesday", 3}, { "Wednesday", 4 }, { "Thursday", 5}, { "Friday", 6} };

    if(week[S]){

        return abs(week[S] - 7);
    } else {
        return -1;
    }

    };
    
int main(int argc, char **argv){

    
    
    string S;

    cin >> S;

    cout << when_is_saturday(S);
    
    return 0;
    
}

