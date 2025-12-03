#include <iostream>
using namespace std;

class Cricketer
{
    string playerName;
    int matches;
    int runs;
    double average;

public:
    void setData()
    {
        cout << "Player name:" << '\n';
        cin >> playerName;
        cout << "Matches played:" << '\n';
        cin >> matches;
        cout << "Runs scored:" << '\n';
        cin >> runs;
        average = (double)runs / matches;
    }

    double getAverage()
    {return average;}

    void display()
    {
        cout<<"Player Name: "<<playerName<<'\n';
        cout<<"Average: "<<average<<'\n';
    }
    
    
};

int main()
{
    int n;
    cout << "Enter number of players" << '\n';
    cin >> n;
    Cricketer arr[100];
    cout << "Enter details:" << '\n';
    for (int i = 0; i < n; i++)
    {
        arr[i].setData();
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j].getAverage() < arr[j + 1].getAverage())
            {
                Cricketer temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        arr[i].display();

    }
}