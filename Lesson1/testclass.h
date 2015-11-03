#ifndef TESTCLASS_H
#define TESTCLASS_H

class TestClass
{
public:
    /**
     * @brief   Default constructor
     **/
    TestClass();
    /**
     * @brief   Copy constructor
     **/
    TestClass(const TestClass &other);
    /**
     * @brief   Move constructor
     **/
    TestClass(const TestClass &&other);
    /**
     * @brief   Copy assign operator
     **/
    TestClass operator=(const TestClass &other);
    /**
     * @brief   Move assign operator
     **/
    TestClass operator=(const TestClass &&other);
    /**
     * @brief   Destructor
     **/
    ~TestClass();
};

#endif // TESTCLASS_H
