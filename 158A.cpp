#include <stdio.h>
#include <iostream>
#include <vector>

int main(){
    int num_participants, k;
    std::cin >> num_participants;   
    std::cin >> k;

    std::vector<int> result;    
    int candidate_result;
    for(int i =0; i < num_participants; i++){
        std::cin >> candidate_result;
        result.push_back(candidate_result);
        //std::cout << result[i] << " ";
    }
    int res = 0;
    for(int i = 0; i < result.size(); i++){
        if(result[i] > 0 && result[i] >= result[k-1])
            res++;
    }
    // std::cout << num_participants << " " << k;
    std::cout << res;

    return 0; 

}