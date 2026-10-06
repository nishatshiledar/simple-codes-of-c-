#include<iostream>
using namespace std;
bool isEven(int n)
{
    if(n%2==0) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    int number;
    cout<<"Enter a number:";
    cin>>number;
    if(isEven(number)) {
        cout<<"Even";
    }
    else {
        cout<<"Odd";
    }
    return 0;
}