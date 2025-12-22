#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<string, int> mp;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        mp[s]++;
    }

    for (auto &p : mp) {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}
