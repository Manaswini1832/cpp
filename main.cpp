#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    char operation;

    cout << "Enter first number" <<endl;
    cin >> num1;

    cout << "Enter second number" <<endl;
    cin >> num2;

    cout << "Enter the required operation : + for addition, - for subtraction, * for multiplication and / for division" << endl;
    cin >> operation;

    switch (operation) {
      case '+':
        cout << num1 + num2;
        break;
      case '-':
        cout << num1 - num2;
        break;
      case '*':
        cout << num1 * num2;
        break;
      case '/':
        cout << num1 / num2;
        break;
    }

    return 0;
}
