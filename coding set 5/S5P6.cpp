#include <iostream>
using namespace std;

class Flight {
public:
    int flightNo;
    string source;
    string destination;
    int seatsAvailable;

    void input() {
        cout << "Enter Flight Number: ";
        cin >> flightNo;

        cout << "Enter Source: ";
        cin >> source;

        cout << "Enter Destination: ";
        cin >> destination;

        cout << "Enter Seats Available: ";
        cin >> seatsAvailable;
    }

    void display() {
        cout << "\nFlight No: " << flightNo;
        cout << "  Source: " << source;
        cout << "  Destination: " << destination;
        cout << "  Seats Available: " << seatsAvailable;
    }

    void bookSeat() {
        if (seatsAvailable > 0) seatsAvailable--;
        else cout << "\nNo seats available for booking.";
    }
};

int main() {
    int n;
    cout << "Enter number of flights: ";
    cin >> n;

    Flight* f = new Flight[n];

    for (int i = 0; i < n; i++) f[i].input();

    string dest;
    cout << "\nEnter destination to search flights: ";
    cin >> dest;

    cout << "\nFlights going to " << dest << ":\n";
    for (int i = 0; i < n; i++)
        if (f[i].destination == dest)
            f[i].display();

    int bookNo;
    cout << "\n\nEnter flight number to book seat: ";
    cin >> bookNo;

    for (int i = 0; i < n; i++)
        if (f[i].flightNo == bookNo) {
            f[i].bookSeat();
            cout << "\nUpdated Flight Details:";
            f[i].display();
        }

    delete[] f;
    return 0;
}
