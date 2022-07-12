#include <iostream>
#include <cstdlib>

using namespace std;


int main() {
    char simbol;

    while (true) {
        cout << "lempar dadu (y/n): ";
        cin >> simbol;

        if (simbol == 'y') {
            cout << 1 + (rand() % 6) << endl;
        } else if (simbol == 'n') {
            cout << "udahan lempar dadunya" << endl;
            break;
        } else {
            cout << "masukinnya y atau n" << endl;
        }
    }
}