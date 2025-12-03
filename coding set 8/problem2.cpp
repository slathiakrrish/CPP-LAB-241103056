#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("file.txt", ios::app);
    if (!file)
    {
        cout << "File does not exist";
    }

    int wordCount = 0;
    int charCount = 0;
    int lineCount = 0;
    string line;

    while (getline(file, line))
    {
        lineCount++;

        charCount += line.length();
    }
    file.clear();
    file.seekg(0);
    string word;
    while (file >> word)
    {
        wordCount++;
    }

    file.close();

    cout << "Lines: " << lineCount << '\n';
    cout << "Characters: " << charCount << '\n';
    cout << "Words: " << wordCount << '\n';
}