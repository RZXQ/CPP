#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    int data;
    int rank;
    int index;
};
node a[10001];

bool comp1(node x, node y) {
    return x.data < y.data;
}

bool comp2(node x, node y) {
    return x.index < y.index;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].data;
        a[i].index = i;
    }
    sort(a + 1, a + n + 1, comp1);
   for (int i = 1; i<=n;i++) {
       a[i].rank = i;
   }
   sort(a + 1, a + n + 1, comp2);
   for (int i = 1; i <= n; i++) {
       cout << a[i].rank << ' ';
   }
    return 0;
}