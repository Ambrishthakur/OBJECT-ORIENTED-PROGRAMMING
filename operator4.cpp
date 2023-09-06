#include<iostream>
using namespace std;

int main(){                         //Miscellaneous operators

    int a = 4;
    cout<<sizeof(a)<<endl;

    char name ='ram';
    cout<<sizeof(name)<<endl;

    bool flag;

    a==name?  flag = true : flag =false;
    cout<<flag<<endl;


    cout<<(&a)<<endl;


    int v = 6;                 //Unary operators
    cout<<(v++)<<endl;

    int w = 5;
    cout<<(--w)<<endl;

    int x = v+w;
    cout<<x<<endl;

    return 0;





}