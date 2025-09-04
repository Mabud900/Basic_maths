/*Given an integer n, return the number of prime numbers that are strictly less than n.*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2)
            return 0;
        vector<bool> isPrime(n,true);
        isPrime[0]=isPrime[1] = false;
        int result=0;
        for(int i = 2 ; i*i < n ; i++){
            for(int j = i*i ; j < n ; j+=i)
                isPrime[j] = false;
        }
        for(int i = 2 ; i <n ; i++){
            if(isPrime[i] == true)
                result++;
        }
        return result;
    }
};
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    Solution s;
    int result=s.countPrimes(n);
    cout<<"number of Prime numbers less than "<<n<<" is: ";
    cout<<result<<endl;
}