#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter the First Number :";
    cin >> a;
    cout << "Enter the Second Number :";
    cin >> b;
    cout << "Enter the Third Number :";
    cin >> c;
    if ( a > b and a > c) {
        cout << "It is the Largest Number =" << a << endl;
    }
     else if (b > a and b > c) {
         cout << "It is the Largest Number =" << b << endl;
    }
    else {
         cout << "It is the Largest Number =" << c << endl;
    }
    return 0;
}