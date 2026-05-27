#include <iostream>
using namespace std;

void factorize(int n) {
    for(int i = 2； i*i <= n; i++) {
        if(n % i == 0) {
            int cnt = 0;
            while(n % i == 0) {
                n /= i;
                cnt++;
            }

            cout << i << "^" << cnt;
            if(n > 1) cout << "*";
        }
    }

    if(n > 1) cout << n << "^1" << endl;
}

int main() {
    int n;
    cin >> n;    //n >= 2
    factorize(n);
}
