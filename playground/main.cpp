#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

#define EL printf("\n")
#define sz(A) (int)A.size()
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define faster ios_base::sync_with_stdio(false) && cin.tie(NULL)

// #define debug 1

int exchangeMoney(std::vector<int> a, int x) {
    int n = a.size();
    // vector<int> f(n, 0);
    // f[0] = x;
    int res = x;
    FOR(i, 0, n - 2) {
        // f[i] = f[i - 1];
        // FOR(j, 0, i - 1) {
        //     int num = f[j] / a[j];
        //     int rem = f[j] % a[j];
        //     f[i] = max(f[i], rem + num * a[i]);
        // }
        int num = x / a[i];
        int rem = x % a[i];
        FOR(j, i + 1, n - 1) {
            res = max(res, rem + num * a[j]);
        }
    }
    // return f[n - 1];
    return res;
}

#ifdef debug
int main() {

    cout << exchangeMoney(vi({978, 604, 888}), 385);
    EL;
    return 0;
}
#endif
