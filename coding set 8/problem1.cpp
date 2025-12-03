#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string fileName;
    cout << "Enter name of text file:";
    getline(cin, fileName);

    ifstream inputFile(fileName);
    if (!inputFile)
    {
        cout << "File does not exist";
    }

    string line;
    while (getline(inputFile, line))
    {
        cout << line << '\n';
    }
    inputFile.close();
}