#include "counterType.h"

void counterType::setCounter() {
    int tempCounter;
    while (true) {
        cout << "Enter value: ";
        if (cin >> tempCounter) {
            if (tempCounter >= 0) {
                counter = tempCounter;  // only sets counter when valid input
                break;
            }
            else {
                cout << "ERROR: Input must be a non-negative number.\n";
            }
        }
    }
}

void counterType::initializeCounter() {
    counter = 0;
}

int counterType::getCounter() {
    return counter;
}

void counterType::incrementCounter() {
    counter++;
}

void counterType::decrementCounter() {
    if (counter >= 1) {
        counter--;
    }
    else {
        cout << "ERROR: Counter can not be decremented below 0.";
    }
}