#include<iostream>
#include<stack>
using namespace std;
void PrintDigits(int N){
    if (N==0){
        cout<<0<<endl;
    }if(N<0){
        N=-N;
    }
    stack<int>st;
    while(N>0){
        st.push(N%10);
        N=N/10;
    }
    while(!st.empty()){
        cout<<st.top()<<' ';
        st.pop();
    }
}
int main(){
    int N;
    cout<<"Enter number: ";
    cin>>N;
    PrintDigits(N);
    return 0;
}