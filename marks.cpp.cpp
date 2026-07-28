#include<iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter the marks of the student:";
    cin >> marks;
    if (marks>=90) {
        cout << "Grade A"<<endl;
    }
    else if(marks>=75) {
        cout << "Grade B" << endl;
    }
    else if(marks>=50) {
        cout << "Grade C"<< endl;
    }
    else {
        cout << "Failed" << endl;
    }
}