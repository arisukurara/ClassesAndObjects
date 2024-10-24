// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "counterType.h"
using namespace::std;

int main()
{
    counterType counterTest;

    counterTest.setCounter();
    cout << "Set to " << counterTest.getCounter() << endl;
    counterTest.incrementCounter();
    cout << "Incremented to " << counterTest.getCounter() << endl;
    counterTest.decrementCounter();
    cout << "And lastly decremented to: " << counterTest.getCounter() << endl;
}

