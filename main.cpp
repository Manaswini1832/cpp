#include <iostream>

using namespace std;

// Template that defines the data type we want to create
// Called as a class
class Book{
    public :
        string title;
        string author;
        string publisher;
};

int main()
{
    // Following is an instance of that "Book" class
    // This instance is called an object
    Book book1;

    book1.title =  "Anne of Green gables";
    book1.author = "L.M.Montgomery";
    book1.publisher = "Bantam books";

    cout << book1.title << endl;
    return 0;
}
