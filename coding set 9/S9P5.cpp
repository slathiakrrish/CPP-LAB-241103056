#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;

    multiset<int> ms;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }

    int X;
    cin >> X;

    auto it = ms.find(X);
    if (it != ms.end()) {
        ms.erase(it);
    }

    for (int x : ms) {
        cout << x << " ";
    }

    return 0;
}
