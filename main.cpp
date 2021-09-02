#include <iostream>

using namespace std;

int main()
{
    //Arrays in C++ are declared as shown below
    int numsArr[5] = {0,1,2,3,4};

    //C++ also supports arrays with a dynamic number of elements
    int numsArr2[] = {0, 5, 6};

    //Array elements can be accessed by indexing them. Indexing starts with 0
    cout << numsArr2[2];

    return 0;
}
