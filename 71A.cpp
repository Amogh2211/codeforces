#include <iostream>
#include <vector>

using namespace std;


int main(){
    int no_input;
    cin >> no_input;
    string input;
    vector<string> inputs;

    for (int i = 0; i < no_input; i++){
        cin >> input;
        inputs.push_back(input);
    }

    for(int i = 0; i < no_input; i++){
        if(inputs[i].size() > 10){
            cout << inputs[i][0] << inputs[i].size() - 2 << inputs[i].back()<< endl;
        }
        else{
            cout << inputs[i] << endl;
        }
    }
}