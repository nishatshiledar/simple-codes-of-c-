#include<iostream>
using namespace std;
struct Rectangle {
    int length;
    int width;
    int area;
};
int main() {
    Rectangle r1;
    cout<<"Enter the length of the rectangle:";
    cin>>r1.length;
    cout<<"Enter the width of the rectangle:";
    cin>>r1.width;
    r1.area=r1.length*r1.width;
    cout<<"The length of the rectangle is="<<r1.length<<endl;
    cout<<"The width of the rectangle is="<<r1.width<<endl;
    cout<<"The area of the reactangle is="<<r1.area<<endl;
    return 0;
}