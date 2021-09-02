#include <iostream>

using namespace std;

int main()
{
    int num1 = 4;
    int num2 = 4;

    if(num1 > num2){
        cout << num1 << " is greater than " << num2 << endl;
    }else if(num1 < num2){
        cout << num1 << " is lesser than " << num2 << endl;
    }else{
        cout << num1 << " is equal to " << num2 << endl;
    }

    return 0;
}
