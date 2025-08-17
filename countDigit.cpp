#include<iostream>
using namespace std;
class Solution{
    public:
    int countDigit(int n){
        int count=0;
        while(n>0){
            count+=1;
            n/=10;
        }return count;
    }
};
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    Solution obj;
    int res=obj.countDigit(n);
    cout<<res;
    return 0;
}