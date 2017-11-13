#ifndef AGGREGATE_H
#define AGGREGATE_H

#include "./iterator.h"

class Aggregate {
public:
    virtual Iterator* createIterator() = 0;
private:
};

#endif