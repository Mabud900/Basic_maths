 /*An integer a divisor of integer n if n % d == 0.

Given an integer n, count how many of its non-zero digits are divisors of n.

Example
n = 124
Output: 3
Explanation: 1, 2, and 4 all divide 124.
*/
#include <iostream>
using namespace std;

int findDigits(int n) {
    int countdigit = 0;
    int original = n;

    while (n > 0) {
        int digit = n % 10;
        if (digit != 0 && original % digit == 0) {
            countdigit++;
        }
        n = n / 10;
    }

    return countdigit;
}

int main() {
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;

    while (t--) {
        int n;
        cout << "Enter number: ";
        cin >> n;
        int result = findDigits(n);
        cout << "Count of divisible digits: " << result << endl;
    }

    return 0;
}
