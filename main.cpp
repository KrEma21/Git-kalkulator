#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int izbira;
    double a, b, rezultat;
    char nadaljuj;

    do {
        cout << "\n===== ***KALKULATOR*** =====" << endl;
        cout << "1. Sestevanje" << endl;
        cout << "2. Odstevanje" << endl;
        cout << "3. Mnozenje" << endl;
        cout << "4. Deljenje" << endl;
        cout << "5. Potenciranje" << endl;
        cout << "6. Izhod" << endl;

        cout << "\nIzberi operacijo: ";
        cin >> izbira;

        if (izbira == 6) {
            cout << "Konec programa." << endl;
            break;
        }

        if (izbira < 1 || izbira > 6) {
            cout << "Napacna izbira!" << endl;
            continue;
        }

        cout << "Vnesi prvo stevilo: ";
        cin >> a;

        cout << "Vnesi drugo stevilo: ";
        cin >> b;

        switch (izbira) {
            case 1:
                rezultat = a + b;
                break;
            case 2:
                rezultat = a - b;
                break;
            case 3:
                rezultat = a * b;
                break;
            case 4:
                if (b == 0) {
                    cout << "Deljenje z 0 ni dovoljeno!" << endl;
                    continue;
                }
                rezultat = a / b;
                break;
            case 5: 
                rezultat =pow(a,b);
                break;
        }

        cout << "Rezultat: " << rezultat << endl;

        cout << "\nZelis nadaljevati? (d/n): ";
        cin >> nadaljuj;

    } while (nadaljuj == 'd' || nadaljuj == 'D');

    return 0;
}
