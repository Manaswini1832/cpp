#include <iostream>

using namespace std;

class Book{
    public :
        string title;
        string author;
        string publisher;
        int rating;

    // Constructor function
    Book(string aTitle, string aAuthor, string aPublisher, int aRating){
        title = aTitle;
        author = aAuthor;
        publisher = aPublisher;
        rating = aRating;
    }

    // Object functions or also called instance functions
    bool isFavorite(){
            if(rating == 5){
                return true;
            }
            return false;
    }

};

int main()
{
    Book book1("Anne of Green gables", "L.M.Montgomery", "Bantam books", 5);
    Book book2("Anne of Windy poplars", "L.M.Montgomery", "Bantam books", 4.5);

    cout << book1.isFavorite() << endl; // Anne of Green gables
    cout << book2.isFavorite() << endl; // No author
    return 0;
}
