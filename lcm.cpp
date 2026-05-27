#include <iostream>
using namespace std;

int gcd(int a, int b){
    return b != 0 ? gcd(b,a%b) : a;   //可把 b != 0 改成 b
}

int lcm(int a, int b){
    return a / gcd(a,b) * b;                 //先除是为了防溢出
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b) << endl;
}
