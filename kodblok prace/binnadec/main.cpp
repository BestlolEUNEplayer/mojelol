#include <iostream>

using namespace std;

int main()
{
    int dziesietna;
    int potega;
    int p1;
    int p2;

    string liczbap1;
    cout << "Podaj liczbe do przeliczenia: " << endl;
    cin >> liczbap1;
    cout << "podaj system: " << endl;
    cin >> p1;
    cout << "podaj na jaki system przeliczyc: " << endl;
    cin >> p2;
    dziesietna=liczbap1[0]-'0';
    for(int i=1; i<=liczbap1.length()-1; i++)
    {
        if(liczbap1[i]>='0' && liczbap1[i]<='9')
        dziesietna = dziesietna*p1 + liczbap1[i]-'0';
        else(dziesietna=dziesietna*p1 + (liczbap1[i]-'A'+10));
    }
    /*
    dziesietna=0;
    potega = 1;
    for(int i = liczbap1.length() - 1; i>=0; i--)
    {
        if(liczbap1[i]>='0' && liczbap1[i] <='9')
        {
        dziesietna+=(liczbap1[i]-'0')*potega;
        potega*=p1;
        }
        else {dziesietna+=(liczbap1[i]-'A'+10)*potega;
        potega *=p1;}

    }
    */
    cout << "liczba w stystemie dziesietnym: " << dziesietna << endl;
    string liczbap2 ="";
do
{
    liczbap2 = (char)(dziesietna % p2+ '0') + liczbap2;
    dziesietna /= p2;
} while(dziesietna > 0);

cout << "liczba w systemie " << p2 << " to " << liczbap2 <<endl;
cout << endl;

return 0;
}
