#include <iostream>
using namespace std;

class Book
{
    int bookID;
    string title;
    string author;
    float price;

public:
    void setData()
    {
        cout << "Enter Book ID: " << '\n';
        cin >> bookID;

        cout << "Enter Book Title: " << '\n';
        cin >> title;

        cout << "Name of Author: " << '\n';
        cin >> author;

        cout << "Price of Book: " << '\n';
        cin >> price;
    }

    string showName()
    {
        return author;
    }
    string showBook()
    {
        return title;
    }
};

int main()
{
    int n;
    string temp;
    cout << "Enter number of Books: " << '\n';
    cin >> n;

    Book arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i].setData();
    }

    cout << "Search book by Author: " << '\n';
    cin >> temp;

    
    for (int i = 0; i < n; i++)
    {
        if (arr[i].showName() == temp)
        {
            cout << arr[i].showBook() << '\n';
        }
    }
}