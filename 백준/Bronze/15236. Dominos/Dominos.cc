#include <iostream>

using namespace std;

void solution() {
    int N;

    cin >> N;
    cout << N*(N+1)*(N+2) / 2;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solution();
}