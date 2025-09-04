#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void Divisor(int n) {
    vector<int> largeDivisors;

    for (int i = 1; i*i <= n; i++) {//i<=sqrt(n)
        if (n % i == 0) {
            cout << i << " ";          // small divisor
            if (i != n / i) {
                largeDivisors.push_back(n / i); // store large divisor to print later
            }
        }
    }

    // print the large divisors in reverse to maintain ascending order
    for (int i = largeDivisors.size() - 1; i >= 0; i--) {
        cout << largeDivisors[i] << " ";
    }

    cout << endl;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    Divisor(n);
}
/*This is the optimal solution it is taking O(root(n)) time and Auxiliary space O(sqrt(n))*/