#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int count;
    if (a % 2 == 0)
        count = a - 1;
    else
        count = a;

    int num = 1;
    for (int i = 0; i < count; i++) {
        cout << num;
        if (i < count - 1) cout << ", ";
        num += 2;
    }

    return 0;
}
