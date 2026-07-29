#include<iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a Number:";
    cin >> number;
    if(number>0 && number%2==0) {
        cout << "The Number is positive and even =" << number <<endl;
    }
    else if(number<0 && number%2!=0) {
        cout << "The Number is negative and odd=" << number <<endl;
    }
    else if(number<0) {
        cout << "The Number is negative ";
    }
    return 0;
}
