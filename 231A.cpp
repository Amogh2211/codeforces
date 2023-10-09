#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

#define line_size 3

int main(){
    int number_inputs;
    std::cin >> number_inputs;
    int confidence;
    vector<vector<int>> line;

    for(int j = 0; j < number_inputs; j++){
        vector<int> v1;
        for(int i = 0; i < line_size; i++){
            std::cin >> confidence;
            v1.push_back(confidence);
        }
        line.push_back(v1);
    }

    int res = 0;

    for (int i = 0; i < line.size(); i++) { 
        int count = 0;

        for (int j = 0; j < line[i].size(); j++){
            if(line[i][j] == 1)
                count++;
        }
        if(count >= 2) 
            res++;
    } 
    cout << res;
    return 0;
}
