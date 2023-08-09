#include <iostream>
using namespace std;

void invalidInput() {
    cout << "Podano nieprawidłową długość boku! Pamiętaj, że wartość boku figury musi być zawsze większa od 0." << endl;
}

const double pi = 3.14;

int main() {
    int menu;
    while (true) {
        cout << "\n\nWybierz opcje z menu\n1. Oblicz pole kwadratu\n2. Oblicz pole prostokata\n3. Oblicz pole koła\n4. Opusc program\n\nWybieram.. ";
        cin >> menu;
        switch (menu) {
            case 1: {
                int a;
                cout << "\n\nPodaj dlugosc boku kwadratu: ";
                cin >> a;
                if (a <= 0) {
                    invalidInput();
                } else {
                    cout << "\nPole tego kwadratu wynosi: " << a * a;
                }
                break;
            }
            case 2: {
                int a, b;
                cout << "\n\nPodaj dlugosc pierwszego boku prostokata: ";
                cin >> a;
                if (a <= 0) {
                    invalidInput();
                    break;
                }
                cout << "\n\nPodaj dlugosc drugiego boku prostokata: ";
                cin >> b;
                if (b <= 0) {
                    invalidInput();
                    break;
                }
                cout << "\nPole tego prostokąta wynosi: " << a * b;
                break;
            }
            case 3: {
                int a;
                cout << "\n\nPodaj dlugosc promienia tego koła: ";
                cin >> a;
                if (a <= 0) {
                    invalidInput();
                } else {
                    cout << "\nPole tego koła wynosi: " << a * a * pi;
                }
                break;
            }
            case 4: return 0;
        }
    }
}
