#include<iostream>
using namespace std;
int main() {
    int number,remainder,revnumber=0;
    cout << "Enter the number: ";
    cin >> number;
    while (number>0) {
        remainder=number%10;
        number  = number/10;
        revnumber=(revnumber*10)+remainder;
    }
    cout << "The reversed number is :"<<revnumber<<endl;
    return 0;
    
}