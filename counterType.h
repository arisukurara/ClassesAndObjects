#ifndef COUNTERTYPE_H
#define COUNTERTYPE_H

#include <iostream>
using namespace std;

class counterType {

public:
    void setCounter();
    void initializeCounter();
    int getCounter();
    void incrementCounter();
    void decrementCounter();

private:
    int counter;
};

#endif