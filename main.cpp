#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    int *pAge = &age;

    // Pointer data type should be the same as the data type of the variable it points to
    string name = "Some name";
    string *pName = &name;

    // Prints out the memory address at which the age variable is being stored
    cout << &age << endl;

    // Prints out the memory address at which the age variable is being stored
    cout << pAge << endl;

    // Prints out the value being pointed to, by the address stored inside the pointer
    // This is called as dereferencing a pointer
    // Prints out 19
    cout << *pAge << endl;

    return 0;
}
