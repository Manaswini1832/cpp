#include <iostream>

using namespace std;

//Could do the following or we could instead also define the function on top of the main() function block itself

//Function stub
void sayHi(string name);

int main()
{
    string name;
    cout << "Enter your name : " << endl;
    getline(cin, name);

    // Function call
    sayHi(name);

    return 0;
}

//Function definition
void sayHi(string name){
    cout << "Hey " << name << endl;
}
