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
    cout<<"Enter the number: ";
    cin>>n;
    Solution obj;
    int res=obj.countDigit(n);
    cout<<"number of digits="<<res;
    return 0;
}
//time complexity=log(n)