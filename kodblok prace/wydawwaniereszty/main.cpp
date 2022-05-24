#include <iostream>

using namespace std;

int main()
{
    cout << "Wydawanie reszty" << endl;
    int T [15] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1,};
    int K [15] = {0};
    double reszta;
    cout << " Podaj wysokoœc reszty do wydania: ";
    cin >> reszta;
    int reszta_gr;
    reszta_gr=reszta*100;
    int i=0;
    while (reszta_gr>0)
    {
        K[i]=reszta_gr/T[i];
        reszta_gr=reszta_gr%T[i];
        i++;
    }
    for (int i=0; i<=14; i++)
        cout<<K[i] <<"x"<<(float)T[i]/100<<" zl"<<endl;
    return 0;
}
