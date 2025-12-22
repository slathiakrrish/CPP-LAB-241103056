#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("xyz.txt");
    
    if (!file) {
        cout << "Error: Cannot open file." << endl;
        return 1;
    }

    long sum = 0;
    int num, count = 0;
    int maxNum, minNum;

    string line;
    bool firstValid = true;

    while (getline(file, line)) {
        try {
            num = stoi(line);
        }
        catch (...) {
            cout << "Warning: Invalid line skipped -> \"" << line << "\"" << endl;
            continue;
        }

        if (firstValid) {
            maxNum = minNum = num;
            firstValid = false;
        }

        sum += num;
        count++;

        if (num > maxNum) maxNum = num;
        if (num < minNum) minNum = num;
    }

    if (count == 0) {
        cout << "No valid integers found in the file." << endl;
        return 0;
    }

    cout << "Sum: " << sum << endl;
    cout << "Maximum: " << maxNum << endl;
    cout << "Minimum: " << minNum << endl;
    cout << "Count: " << count << endl;

    return 0;
}
