#include<iostream>
using namespace std;
struct Triplet{
    int x,y,gcd;
};
Triplet ExtendedEuclid(int a,int b){
    //base case
    if(b==0){
        return {1,0,a};//x=1,y=0,gcd=a
    }

    //Recursive call
    Triplet smallAns=ExtendedEuclid(b,a%b);

    //update x and y using result of recursion
    int x=smallAns.y;
    int y=smallAns.x-(a/b)*smallAns.y;

    return {x,y,smallAns.gcd};
}
int main(){
    int a,b,x,y;
    cin>>a>>b;
    Triplet result=ExtendedEuclid(a,b);
    cout << "x = " << result.x << ", y = " << result.y << ", gcd = " << result.gcd << endl;
}