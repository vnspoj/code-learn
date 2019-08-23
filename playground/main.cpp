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

int n, comp[55], visited[55];
vi a, c;

int minimalCost(std::vector<int> _c, std::vector<int> _a) {
    n = sz(_c);
    a.push_back(-1);
    c.push_back(-1);
    FOR(i, 1, n) {
        a.push_back(_a[i - 1]);
        c.push_back(_c[i - 1]);
    }
    int res = 0;
    FOR(i, 1, n) {
        if (!comp[i]) {
            int u = i;
            if (a[u] == u) {
                comp[u] = ++comp[0];
                res += c[u];
                visited[u] = 1;
            } else {
                deque<int> st;
                for (int v = u;; v = a[v]) {
                    st.push_back(v);
                    cout << v << " ";
                    if (!visited[v]) {
                        visited[v] = 1;
                    } else {
                        break;
                    }
                }
                int v = st.back();
                if (!comp[v]) {
                    comp[v] = ++comp[0];
                    int t = c[v];
                    for (int k = a[v]; k != v; k = a[k]) t = min(t, c[k]);
                    res += t;
                }
                for (int x : st) comp[x] = comp[v];
            }
        }
    }
    return res;
}

#ifdef debug
int main() {

    cout << minimalCost(vi({1, 2, 3, 2, 10}), vi({1, 3, 4, 3, 3}));

    EL;
    return 0;
}
#endif
