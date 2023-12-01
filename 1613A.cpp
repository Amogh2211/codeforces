// Author: #############

#include <bits/stdc++.h>
using namespace std;
#define long int64_t

int num_digits(int x, int p){
    int count = 0;
    while(x){
        x /= 10;
        count++;
    }
    return count + p;
}

void solve()
{
    long x1, p1, x2, p2;
    cin >> x1 >> p1 >> x2 >> p2;

    // so p1 and p2 directly append to digits
    // if sum of digits of x1 
    // just multiply and see? no
    // num_digits(x1) + p1 = total digits in first number
    // same for num 2
    // nested ifs?

    // whichever has bigger num_digits is greater

    
    // if(num_digits(x1, p1) > num_digits(x2, p2)){
    //     cout << ">\n";
    //     return;
    // }
    // else if(num_digits(x1, p1) < num_digits(x2, p2)){
    //     cout << "<\n";
    //     return;
    // }

    //num_digits(x1) + p1 = num_digits(x2) + p2 and p1 > P2
    // 6 = (p2 - p1)

    // check first six digits

    // p1, p2 when can u tell which is greater
    
    // what the fuck am I writing
    // if same, compare x?
    // 123456 0 = 123456
    // 123 3 = 123000

    //12345 101-> 1234500000000(104)
    //12 104 -> 120000000(101)

    // 1999 0 -> 1999
    // 2 3    -> 2000


    // 10^6 10^6 -> (there will be 7+10^6 digits) (kill me)
    
    if(abs(p1 - p2) >= 7){
        if(p1 > p2){
            cout << ">\n";
            return;
        }
        if(p1 < p2){
            cout << "<\n";
            return;
        }
    }

    // common would be min(p1, p2)


    if(p1 > p2){
        x1 = x1 * pow(10, abs(p1 - p2));
        x2 = x2;
    }

    if(p1 < p2){
        x1 = x1;
        x2 = x2 * pow(10, abs(p1 - p2));
    }

    if(p1 == p2){
        x1 = x1;
        x2 = x2;
    }

    if(x1 > x2)
            cout << ">\n";
    else if(x1 < x2)
        cout << "<\n";
    else
        cout << "=\n";
    return;



}

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
