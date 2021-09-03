#include <iostream>

using namespace std;

// Using class inheritance we can also override certain functions from the parent class

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
        void makeSalad(){
            cout << "Chef is making Italian salad" << endl;
        }
};

int main()
{
    Chef chef1;
    chef1.makeSalad(); // Chef is making salad

    ItalianChef itChef;
    itChef.makeSalad(); // Chef is making Italian salad
    itChef.makePasta(); // Chef is making pasta

    return 0;
}
