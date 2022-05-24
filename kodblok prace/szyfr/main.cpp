#include <iostream>
#include <string>
using namespace std;


string szyfruj(string tjawny)
{
    string wynik;
    int dlt=tjawny.length();
    for(int i=0; i<dlt; i++)
    {
        wynik=wynik+tjawny[i];
        wynik=wynik+="xyz";
    }
    return wynik;
}


int main()
{
    string tekst, szyfrogram;
    cout << "podaj tekst jawny: " << endl;
    getline(cin, tekst);

    szyfrogram=szyfruj(tekst);
    cout << "szyfrogram to: " << szyfrogram;
    return 0;

}
