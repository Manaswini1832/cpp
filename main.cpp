#include <iostream>

using namespace std;

// Class inheritance can be used to extend the functionality of classes
// In the following example, the Italian chef has all the abilities as the normal chef but in addition to it the Italian chef can also make pasta

class Chef{
    public :
        void makeSalad(){
            cout << "Chef is making salad" << endl;
        }
};

class ItalianChef : public Chef{
    public :
        void makePasta(){
            cout << "Chef is making pasta" << endl;
        }
};

int main()
{
    Chef chef1;
    chef1.makeSalad();

    ItalianChef itChef;
    itChef.makeSalad();
    itChef.makePasta();

    return 0;
}
