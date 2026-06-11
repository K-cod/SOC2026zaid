#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    const int MAXV = 1000000;
    vector<int> freq(MAXV + 1);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    for (int d = MAXV; d >= 1; d--) {
        int cnt = 0;
        for (int m = d; m <= MAXV; m += d) {
            cnt += freq[m];
            if (cnt >= 2) {
                cout << d << '\n';
                return 0;
            }
        }
    }
}