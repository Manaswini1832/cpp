#include <iostream>

using namespace std;

int main()
{
    string color;
    cout << "Type in a color : " << endl;
    getline(cin, color);

    string pluralNoun;
    cout << "Type in a plural noun : " << endl;
    getline(cin, pluralNoun);

    string celebrity;
    cout << "Enter the name of your favorite celebrity" << endl;
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}
