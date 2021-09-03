#include <iostream>

using namespace std;

// Template that defines the data type we want to create
// Called as a class
class Book{
    public :
        string title;
        string author;
        string publisher;

    // This is a constructor function
    // It makes it easier to create objects by just passing parameters to the instance
    Book(string aTitle, string aAuthor, string aPublisher){
        title = aTitle;
        author = aAuthor;
        publisher = aPublisher;
    }

    // We could create multiple constructor functions as well
    // For example, we can create a constructor function like the following to fill in default values if no parameters are passed to the instance
    Book(){
        title = "No title";
        author = "No author";
        publisher = "No publisher";
    }
};

int main()
{
    Book book1("Anne of Green gables", "L.M.Montgomery", "Bantam books");
    Book book2;

    cout << book1.title << endl; // Anne of Green gables
    cout << book2.author << endl; // No author
    return 0;
}
