// Author: #############

#include <bits/stdc++.h>
using namespace std;
#include <string>
#define long int64_t

int main()
{
    string n;
    cin >> n;

    
    string s;

    for (int i = 0; i < (int)n.size(); ++i){
        if(!(n[i] == 'a' or n[i] == 'e' or n[i] == 'i' or n[i] == 'o' or n[i] == 'u' or n[i] == 'y' or
            n[i] == 'A' or n[i] == 'E' or n[i] == 'I' or n[i] == 'O' or n[i] == 'U' or n[i] == 'Y'
            )){
            s.string::push_back('.');
            s.string::push_back(n[i]);
        }
    }

    transform(s.begin(), s.end(), s.begin(), ::tolower); 
    cout << s << '\n';
    return 0;
}
