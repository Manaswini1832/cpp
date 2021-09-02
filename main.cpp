#include <iostream>

using namespace std;

string getDay(int num){
    string day;
    switch(num){
    case 1 :
        day = "Sunday";
        break;
    case 2 :
        day = "Monday";
        break;
    case 3 :
        day = "Tuesday";
        break;
    case 4 :
        day = "Wednesday";
        break;
    case 5 :
        day = "Thursday";
        break;
    case 6 :
        day = "Friday";
        break;
    case 7 :
        day = "Saturday";
        break;
    default :
        day = "Invalid number entered";
        break;
    }

    return day;
}

int main()
{
    int num;
    cout << "Enter a number corresponding to a weekday" << endl;
    cin >> num;
    string result = getDay(num);
    cout << result << endl;

    return 0;
}
