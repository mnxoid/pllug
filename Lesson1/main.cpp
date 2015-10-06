#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

const int f(int i)
{
    ++i;
    return i;
}

int f1(int i)
{
    --i;
    return i;
}

int main()
{
    int a{5};
    int *pa{&a};
    cout << (unsigned int)pa << endl;
    int arr[] {1,2,3,4,5,6,7,8,9,0,1};
    cout << "Testing strange size method:" << endl;
    cout << "sizeof(arr): " << sizeof(arr) << endl;
    cout << "sizeof(arr[0]): " << sizeof(arr[0]) << endl;
    cout << "Element count: " << sizeof(arr)/sizeof(arr[0]) << endl;
    cout << typeid(&arr).name() << endl;
    int (*test)[11];
    cout << typeid(test).name() << endl;
    test=&arr;
    cout << "Const function test:" << endl;
    cout << typeid(f).name() << endl;
    cout << typeid(f1).name() << endl;
    int* bp = nullptr;
    {
        int blah=1337;
        bp = &blah;
    }
    int blah1 = 8;
    cout << "Blah: " << *bp << endl;
    blah1++;
//    cout << blah1 << endl;
    cout << *(&blah1) << endl;
    return 0;
}


