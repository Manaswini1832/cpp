#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

// Multi line string inputs convert to integer and print the numbers in the second line in reverse order

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string strSize, strMulti;
    int size;
    vector<int> nums;

    // Get array size from STDIN
    getline(cin, strSize);
    size = stoi(strSize);

    // Get array elements from STDIN

    // Following four lines of code read integers separated by whitespaces and convert them to an integer and push them to the nums vector
    getline(cin, strMulti);
    istringstream is(strMulti);
    int num;
    while(is >> num) nums.push_back(num);

    for(int index = size - 1; index >= 0; index--){
        cout << nums[index] << " ";
    }

    return 0;
}
