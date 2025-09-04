//Write a program to print GCD of a given array of integers.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    int findGCD(vector<int>& nums) {
        int minVal = nums[0], maxVal = nums[0];
        for (int num : nums) {
            if (num < minVal) minVal = num;
            if (num > maxVal) maxVal = num;
        }
        return gcd(minVal, maxVal);
    }
};

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution s;
    int result = s.findGCD(nums);
    cout << "GCD of smallest and largest element: " << result << endl;

    return 0;
}