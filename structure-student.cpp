#include<iostream>
using namespace std;
struct Student {
    string name;
    int age;
    float marks;
};
int main() {
    Student s1;
    s1.name="Nishat";
    s1.age=20;
    s1.marks=87.7;
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.marks<<endl;
    return 0;
}