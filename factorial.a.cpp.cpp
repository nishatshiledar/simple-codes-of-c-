#include<iostream>
using namespace std;
int main() {
    int n,i,sum=0,factorial=1;
    cout<< "Enter a number:";
    cin >> n;
    for(i=1; i<=n; i++) {
        factorial=factorial*i;
    }
    cout<<"Factorial of the given number is="<<factorial<<endl;
    return 0;
}