#include<iostream>
using namespace std;
int main(){
    int a = 14;  // a means dividend
    int b = 3;  // b is devisor

    int q = a/b; // q is quotient
    int r;  // r is remainder

    r = a- (b*q);
    cout<<r;

}