#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool is_sorted = true;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i-1]) {
                is_sorted = false;
                break;
            }
        }

        if (is_sorted || k >= 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}