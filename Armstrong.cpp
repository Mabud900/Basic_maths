#include<iostream>
using namespace std;
class Solution {
  public:
    bool armstrongNumber(int n) {
        
        int dup=n;
        int sum=0;
        while(n>0){
            int lastDigit=n%10;
            sum=sum+(lastDigit*lastDigit*lastDigit);
            n/=10;
        }
        if(dup==sum){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    Solution obj;
    bool res=obj.armstrongNumber(n);
    if(res){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}