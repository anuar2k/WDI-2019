#include <iostream>

using namespace std;

bool suma(int n) {
    int a = 1, b = 1, c;
    int suma = 0;

    while (suma < n) {
        suma += a;
        c = a + b;
        a = b;
        b = c;
    }

    if (suma == n) {
        return true;
    }

    a = 1;
    b = 1;
    while (suma > n) {
        suma -= a;
        c = a + b;
        a = b;
        b = c;
    }

    return n == suma;
}

int main() {
    int n;
    cin >> n;

    n++;
    while (suma(n)) {
        n++;
    }

    cout << n;
}