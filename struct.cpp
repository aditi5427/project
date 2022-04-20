#include <iostream>
using namespace std;

struct Book
{
    string title;
    string author;
    int pages;
};

int main()
{
    struct Book book1;
    book1.title = "Harry Potter";
    book1.author = "Jk Rowling";
    book1.pages = 879;

    cout << book1.author << endl;
    
    return 0;
}