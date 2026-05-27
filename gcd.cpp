#include <iostream>
using namespace std;

int gcd1(int a, int b) {
    while(b != 0){
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

//递归
int gcd2(int a, int b){
    return b != 0 ? gcd2(b,a%b) : a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd1(a, b) << endl;
    cout << gcd2(a, b) << endl;
}
