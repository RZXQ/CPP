#include<iostream>

using namespace std;
int n, m, ans = 0;

int main() {
    freopen("tongji.in", "r", stdin);
    freopen("tongji.out", "w", stdout);
    cin >> n >> m;
    for (int i = n; i <= m; i++) {
        int o = i;
        int p;
        while (o != 0) {
            p = o % 10;
            if (p == 2) { ans++; }
            o = o / 10;
        }
    }
    cout << ans;
    fclose(stdin);
    fclose(stdout);
    return 0;
}

