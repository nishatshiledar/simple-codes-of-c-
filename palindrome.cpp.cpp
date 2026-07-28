#include<iostream>
using namespace std;

int main() {
    int number, remainder, revnumber = 0, original;

    cout << "Enter the Number: ";
    cin >> number;

    original = number;   // store original number

    while(number > 0) {
        remainder = number % 10;
        revnumber = (revnumber * 10) + remainder;
        number = number / 10;   // remove last digit
    }

    if(revnumber == original) {
        cout << "The entered Number is a Palindrome" << endl;
    }
    else {
        cout << "The entered Number is not a Palindrome" << endl;
    }

    return 0;
}