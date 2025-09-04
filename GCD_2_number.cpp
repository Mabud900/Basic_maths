//find hcf of two given number
#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b){
    int gcd=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }return gcd;
}
int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    int result=gcd(a,b);
    cout<<"GCD= "<<result;
}