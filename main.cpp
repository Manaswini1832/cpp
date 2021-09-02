#include <iostream>

using namespace std;

int main()
{
    int arr2d[3][2] = {
    {1,2},
    {3,4},
    {5,6}
    };

    for(int rowInd = 0; rowInd < 3; rowInd++){
        for(int colInd = 0; colInd < 2; colInd++){
            cout << arr2d[rowInd][colInd] << " ";
        }
        cout << endl;
    }

    return 0;
}
