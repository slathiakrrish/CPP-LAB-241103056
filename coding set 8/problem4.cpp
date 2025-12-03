#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("file1.txt", ios::app);
    cout << "Enter lines of text. Enter'STOP' to finish" << '\n';

    string line;
    while (true)
    {
        getline(cin, line);
        if (line == "STOP")
            break;
        file << line << '\n';
    }
    file.close();
    cout << "Data appended successfully" << '\n';
}