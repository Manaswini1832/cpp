#include <iostream>

using namespace std;

int main()
{
    int index = 6;

    //Checks condition and only then executes the code
    //Won't print 6 to the console
    while(index <= 5){
        cout << "This is the while loop" << endl;
        cout << index << endl;
        index ++;
    }

    index = 6;

    //Executes code and checks for conditions
    //So it will print out 6 to the console
    do{
       cout << "This is the do while loop" << endl;
       cout << index << endl;
       index++;
    }while(index <= 5);

    return 0;
}
