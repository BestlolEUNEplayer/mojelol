#include <iostream>

using namespace std;

    struct u1_zw
    {
    int licznik;
    int mianownik;
    };

int main()
{
    u1_zw u1,u2,u3;
    cout <<  "podaj licznik ulamka" << endl;
    cin >> u1.licznik;
    cout << "podaj mianownik ulamka" << endl;
    cin >> u1.mianownik;
    cout <<  "podaj licznik drugiego ulamka" << endl;
    cin >> u2.licznik;
    cout << "podaj mianownik drugiego ulamka" << endl;
    cin >> u2.mianownik;
    u3.licznik = u1.licznik*u2.licznik;
    u3.mianownik = u1.mianownik*u2.mianownik;
    cout << "wynik mnozenia to: " << u3.licznik << "/" << u3.mianownik;

}
