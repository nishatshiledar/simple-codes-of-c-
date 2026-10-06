#include <iostream>
using namespace std;

enum Signal {
    RED,
    YELLOW,
    GREEN
};

int main() {
    Signal signal;
    int choice;

    cout << "Enter 0 for RED, 1 for YELLOW, 2 for GREEN: ";
    cin >> choice;

    signal = static_cast<Signal>(choice);

    if (signal == RED) {
        cout << "STOP" << endl;
    }
    else if (signal == YELLOW) {
        cout << "WAIT" << endl;
    }
    else if (signal == GREEN) {
        cout << "GO" << endl;
    }
    else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
