#include "Employee.h"
#include <list>

class IPrinter {
public:
    virtual void print(list<Employee*> data) const = 0;
};

class ShortPrinter : public IPrinter {
public:
    void print(list<Employee*> data) const;
};

class DetailedPrinter : public IPrinter {
public:
    void print(list<Employee*> data) const;
};