#include <iostream>
#include <string>
using namespace std;

int main()
{
    string wyraz;
    cout << "Podaj wyraz: " << endl;
    cin >> wyraz;
    cout << wyraz[0] << " " << wyraz[wyraz.length() -1];
    return 0;
}
