// Author: yeeter

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

int main()
{
    int c1, c2;
    cin >> c1 >> c2;

    int time = 0;

    if (c1 < 2 and c2 < 2){
        cout << 0;
        return 0;
    }
    
    if(c1 >= c2){
        swap(c1, c2);
    }
    
    while(c1 and c2){
        c1 += 1;
        c2 -= 2;

        if(c2 <= 2)
            swap(c1,c2);

        time += 1;  
        // cout << c1 << " " << c2 << "\n";   
    }
    cout << time;
    return 0;
}
