#include<iostream>
using namespace std;
class Palindrome{
    public:
    bool isPalindrome(int x){
        if(x<0||(x%10==0&&x!=0)) return false;
        int rev=0;
        while(x>rev){
            rev=rev*10+x%10;
            x/=10;
        }return (x==rev)||(x==rev/10);
    }
};
int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;
    Palindrome objp;
    bool res=objp.isPalindrome(x);
    if(res==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}