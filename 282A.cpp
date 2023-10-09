#include <iostream>
#include <vector>

using namespace std;

int main(){
    int num_commands, x = 0;
    cin >> num_commands;
    vector<string> operations;
    string op;
    for(int i = 0; i < num_commands; i++){
        cin >> op;
        operations.push_back(op);
    }
    for(int i = 0; i < operations.size(); i++){
        if(operations[i] == "++X" || operations[i] == "X++")
            x++;
        else
            x--;
    }
    cout << x;
    return 0;
}