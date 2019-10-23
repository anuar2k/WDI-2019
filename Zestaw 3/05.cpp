#include <iostream>

using namespace std;

int wynik[1100] = {0};
int ulamek[1100] = {0};

int main() {
    wynik[0] = 5;
    ulamek[0] = 5;

    for (int i = 3; i <= 100; i++) {
        int reszta = 0;
        for (int j = 0; j < 1100; j++) {
            int temp = reszta*10 + ulamek[j];
            int temp2 = temp;
            temp2 = temp2 / i;
            reszta = temp % i;
            ulamek[j] = temp2;
        }

        for (int j = 1100; j >= 0; j--) {
            int nowa_cyfra = (wynik[j] + ulamek[j]) % 10;
            int dodatek_wyzej = (wynik[j] + ulamek[j]) / 10;
            wynik[j] = nowa_cyfra;
            
            int k = j - 1;
            while (dodatek_wyzej > 0) {
                nowa_cyfra = (wynik[k] + ulamek[k] + dodatek_wyzej) % 10;
                dodatek_wyzej = (wynik[k] + ulamek[k] + dodatek_wyzej) / 10;
                wynik[k] = nowa_cyfra;

                k--;
            }
        }
    }

    cout << "2.";
    for (int x : wynik) {
        cout << x;
    }
}

/*

1888
0259

1048




*/