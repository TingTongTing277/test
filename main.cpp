#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    printf("GoodBye, World!\n");

    int a[10];

    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    sort(a, a + 10);

    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
