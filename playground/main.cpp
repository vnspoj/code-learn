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

int distributeCandy(std::vector<int> a) {
    int n = a.size();
    if (n == 1)
        return 1;
    int cur = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[cur])
            cur = i;
    }
    int res = 1;
    for (int j = cur + 1, t = 1; j < n; j++) {
        if (a[j] > a[j - 1])
            res += ++t;
        else
            res += (t = 1);
    }
    for (int j = cur - 1, t = 1; j >= 0; j--) {
        if (a[j] > a[j + 1])
            res += ++t;
        else
            res += (t = 1);
    }
    return res;
}

#ifdef debug
int main() {

    EL;
    return 0;
}
#endif
