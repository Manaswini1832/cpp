#include <iostream>

using namespace std;

// Aim or the motivation behind using getters and setters
// Say we want the rating to be restricted to an int between 0 and 5 and we want to set the rating to 0 if not rated
// We can do that by setting the rating variable inside the Book class to be private
// Now that we can't access this private variable outside the class, to get it or to set it to another value we need to create functions
// The getter function is getRating()
// The setter function is setRating()

class Book{
    private :
        int rating;
    public :
        string title;
        string author;
        string publisher;

    // Constructor function
    Book(string aTitle, string aAuthor, string aPublisher, int aRating){
        title = aTitle;
        author = aAuthor;
        publisher = aPublisher;

        // Whenever rating is entered as a parameter to the object, the setRating function needs to be called
        setRating(aRating);
    }

    // Setter function : setRating()
    void setRating(int userEnteredRating){
            if(userEnteredRating < 0 || userEnteredRating > 5){
                rating = 0;
            }else{
                rating = userEnteredRating;
            }
    }

    // Getter function : getRating()
    int getRating(){
        return rating;
    }

};

int main()
{
    Book book1("Anne of Green gables", "L.M.Montgomery", "Bantam books", 4);
    book1.setRating(5);
    cout << book1.getRating() << endl;
    return 0;
}
