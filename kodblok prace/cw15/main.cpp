#include <iostream>
#include <string>
using namespace std;

int main()
{
    string tekst1, tekst2;
    cout << "Podaj tekst nr 1: " << endl;
    getline(cin,tekst1);
    cout << "Podaj tekst nr 2: " << endl;\
    getline(cin,tekst2);

    if(tekst1==tekst2)
    {
        cout << "Podane teksty sa identyczne";
    }
        else
        {
            if(tekst1.length()!=tekst2.length())
            {
                cout << "Podane teksty roznia sie dlugoscia";
            }
            else
            {
                cout << "Podane teksty roznia sie gramatyka";
            }
        }
    return 0;
}
