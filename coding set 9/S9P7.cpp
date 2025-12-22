#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v(N);
    unordered_map<int, int> freq;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        freq[v[i]]++;
    }

    for (int x : v) {
        if (freq[x] == 1) {
            cout << x;
            return 0;
        }
    }

    cout << -1;
    return 0;
}
