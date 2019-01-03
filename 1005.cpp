#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int a, int b) {
    return a > b;
}
int main() {
    int n, temp, count = 0;
    bool flag[1000000] = { false };
    bool symbol;
    int k[101];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    sort(k, k + n, cmp);
    for (int i = 0; i < n; i++) {
        temp = k[i];
        symbol = true;
        while (temp != 1 && !flag[temp]) {
            if (symbol)
                symbol = false;
            else
                flag[temp] = true;
            if (temp % 2)
                temp = (3 * temp + 1) / 2;
            else
                temp /= 2;

        }
    }
    for (int i = 0; i < n; i++) {
        if (!flag[k[i]])
            count++;
    }
    for (int i = 0; i < n&&count!=0; i++) {
        if (!flag[k[i]]) {
            cout << k[i];
            if (count != 1) {
                count--;
                cout << " ";
            }
        }
    }
    return 0;
}

