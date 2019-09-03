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

#define debug 1

int n, k;
vector<string> res;

int check(string s) {
    int res = 0;
    for (int i = 0; i < int(s.size()) - k + 1; i++) {
        int ok = true;
        for (int j = i; j <= i + k - 1; j++) {
            if (s[j] == 'B') {
                ok = false;
                break;
            }
        }
        res += ok;
    }
    return res;
}

void solve(string s) {
    if (check(s) > 1)
        return;
    if (s.size() == n) {
        if (check(s) == 1)
            res.push_back(s);
        return;
    }
    solve(s + "A");
    solve(s + "B");
}

std::vector<std::string> stringAB(int _n, int _k) {
    n = _n;
    k = _k;
    solve("");
    return res;
}

#ifdef debug
int main() {

    stringAB(3, 2);

    EL;
    return 0;
}
#endif
