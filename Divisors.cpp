#include <iostream>
using namespace std;

void Divisor(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    Divisor(n);

    return 0;
}