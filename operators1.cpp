#include<iostream>
using namespace std;

int main(){

    int num1 = 8;
    int num2 = 6;

    cout<<num1+num2<<endl;      //(Arithmetic operators)
    cout<<num1-num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1/num2<<endl;
    cout<<num1%num2<<endl;

    cout<<(num1<num2)<<endl;     //(Relational operators)
    cout<<(num1>num2)<<endl;
    cout<<(num1>=num2)<<endl;
    cout<<(num1<=num2)<<endl;
    cout<<(num1==num2)<<endl;


    num1+=2;
    cout<<num1<<endl;
    num2-=2;
    cout<<num2<<endl;
    num1/=4;
    cout<<num1<<endl;
    num2%2;
    cout<<num2<<endl;

    return 0;


}