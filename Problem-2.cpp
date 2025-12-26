#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Input : ";
    cin >> a;

    int num = 1;
    for (int i = 0; i < a; i++) {
        cout << num;
        if (i < a - 1) cout << ", ";
        num += 2;
    }

    return 0;
}