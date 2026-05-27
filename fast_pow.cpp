#include <iostream>
using namespace std;
#define ll long long

ll fastPow(ll a, ll b, ll mod) {
    ll res = 1;
    
    while(b) {
        if(b & 1){
            res = res * a % mod;
        }

        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

int main()
{
    ll a, b, mod;
    cin >> a >> b >> mod;
    cout << fastPow(a, b, mod) << endl;
}
