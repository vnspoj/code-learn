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

int minMove(int n) {
    if (n == 1)
        return 0;
    int res = n - 1;
    for (int i = 2; i < n - 1; i++) {
        int ans = 0;
        int a = n, b = i;
        for (;;) {
            if (a == 1 && b == 1)
                break;
            ans++;
            if (ans >= res)
                break;
            a -= b;
            if (a < b)
                swap(a, b);
        }
        res = min(res, ans);
    }
    return res;
}

#ifdef debug
int main() {

    cout << minMove(3);

    EL;
    return 0;
}
#endif
