/**
 * Majowie to smieszni byli. Oni to maja niby system 20tkowy, ale tak
 * naprawde druga cyfra od prawej jest 18tkowa, czyli zamiana DEC -> MAYAN to:
 * 20 -> 10
 * 359 -> HJ
 * 360 -> 100
 * 379 -> 10J
 * 7200 -> 1000
 */
#include <iostream>

using namespace std;

string int_to_mayan(unsigned int int_number) {
    if (int_number == 0) {
        return "0";
    }
    //Akumulator, w ktorym bedziemy trzymac kolejne cyfry - wynik to odwrocony acc
    string acc = "";
    /**
     * Pozycja, dla ktorej szukamy cyfry.
     * Potrzebujemy tego licznika, by obsluzyc
     * sytuacje dla drugiej cyfry (nieregularnosc systemu)
     */
    unsigned int pos = 1;
    while (int_number > 0) {
        //nasza baza dla wszystkich pozycji oprocz 2 bedzie 20
        unsigned int base = (pos == 2) ? 18 : 20;
        unsigned int digit = int_number % base;
        //musimy zamienic 0..19 na '0'..'J'
        acc += (digit < 10) ? ('0' + digit) : ('A' + digit - 10);
        int_number /= base;
        pos++;
    }
    //robimy rewers akumulatora, czyli pobieramy znaki od konca acc i wrzucamy do result
    string result = "";
    for (int i = acc.length() - 1; i >= 0; i--) {
        result += acc[i];
    }
    return result;
}

int main() {
    unsigned int number;
    cin >> number;
    cout << int_to_mayan(number);
}