#include <iostream>
using namespace std;

class movie
{
public:
    string title;
    string writer;
    int rating;

    void About()
    {
        cout << " Title- " << title << endl;
        cout << "Director- " << writer << endl;
        cout << "Rating- " << rating << endl;
    }
};

int main()
{
    movie film;
    film.title = "Harry Potter";
    film.writer = "JK Rowling";
    film.rating = 10;

    film.About();

    return 0;
}