#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i].first >> v[i].second;
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (v[j].second < v[i].second ||
               (v[j].second == v[i].second && v[j].first < v[i].first)) {
                swap(v[i], v[j]);
            }
        }
    }

    for (auto &p : v) {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}
