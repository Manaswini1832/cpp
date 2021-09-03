#include <iostream>
#include <vector>

using namespace std;

// Vectors and iterators in C++

int main()
{
    vector<int> v;
    // push_back is to append elements to a vector
    // pop_back(); removes and element from the end of the vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }

    // Above for loop can easily be executed using an iterator shown below
    vector<int>::iterator iter;

    for(iter = v.begin(); iter != v.end(); iter++){
        cout << *iter << endl;
    }

    return 0;
}
