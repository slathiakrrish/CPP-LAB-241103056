#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int N, K;
    cin >> N;
    
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    
    cin >> K;
    
    priority_queue<int> pq(v.begin(), v.end());
    
    for (int i = 0; i < K && !pq.empty(); i++) {
        cout << pq.top() << " ";
        pq.pop();
    }
    
    return 0;
}
