#include "testclass.h"
#include <iostream>

using namespace std;

TestClass::TestClass()
{
    cout << this << " : " << "Default constructor" << endl;
}

TestClass::TestClass(const TestClass &other)
{
    cout << this << " : " << "Copy constructor" << endl;
}

TestClass::~TestClass()
{
    cout << this << " : " << "Destructor" << endl;
}

TestClass TestClass::operator=(const TestClass &other)
{
    cout << this << " : " << "Copy assignment" << endl;
    return other;
}

TestClass TestClass::operator=(const TestClass &&other)
{
    cout << this << " : " << "Move assignment" << endl;
    return *this;
}
