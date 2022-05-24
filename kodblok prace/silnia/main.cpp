#include <iostream>

using namespace std;

unsigned long long silnia_rek(unsigned long long n)
{
    if(n==0)
        return 1;
    else
        return n*silnia_rek(n-1);

}
long long silnia(int n)
{
    long long wynik=1;

    if(n>1)
        for(int i = 2; i <= n; i++)
        wynik*=i;
    return wynik;
}
int main()
{
    long long n;
    cout << "Podaj liczbe: " << endl;
    cin >> n;
    cout << "Silnia(iteracyjna) " << n << " wynosi: "<<silnia(n)<<endl;
    cout << "Silnia(rekurencyjna) " << n << " wynosi: "<<silnia_rek(n)<<endl;
    return 0;
}
