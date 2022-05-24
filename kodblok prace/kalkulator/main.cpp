#include <iostream>

using namespace std;


    struct ulamek
    {
    int licznik;
    int mianownik;
    };

int nwd(int a, int b)
{
    while(a!=b)
       if(a>b)
           a-=b; //lub a = a - b;
       else
           b-=a; //lub b = b-a
    return a; // lub b - obie zmienne przechowuj¹ wynik NWD(a,b)
}



    ulamek skroc(ulamek u1)
    {
        ulamek wynik =u1;
        if(u1.licznik!=0)
        {
        int  intnwd= nwd(u1.licznik, u1.mianownik);
        wynik.licznik /= intnwd;
        wynik.mianownik /= intnwd;
        }
        return wynik;
    }


    ulamek mnozenie(ulamek u1,ulamek u2)
    {
    ulamek u3;
    u3.licznik = u1.licznik*u2.licznik;
    u3.mianownik = u1.mianownik*u2.mianownik;
    return skroc(u3);
    }

    ulamek dodawanie(ulamek u1, ulamek u2)
    {
        ulamek u4;
        u4.licznik = u1.licznik * u2.mianownik + u2.licznik * u1.mianownik;
        u4.mianownik = u1.mianownik * u2.mianownik;
        return skroc(u4);

    }

    ulamek odejmowanie(ulamek u1, ulamek u2)
    {
        ulamek u5;
        u5.licznik = u1.licznik * u2.mianownik - u2.licznik * u1.mianownik;
        u5.mianownik = u1.mianownik * u2.mianownik;
        return skroc(u5);
    }
    ulamek dzielenie(ulamek u1, ulamek u2)
    {
        ulamek u6;
        u6.licznik = u1.licznik*u2.mianownik;
        u6.mianownik = u1.mianownik*u2.licznik;
        return skroc(u6);
    }
int main()
{
    ulamek u1, u2, u3, u4, u5, u6;
    cout<<"podaj licznik pierwszego ulamka" << endl;
    cin >> u1.licznik;
    cout<<"podaj mianownik pierwszego ulamka" << endl;
    cin >> u1.mianownik;
    cout<<"podaj licznik drugiego ulamka" << endl;
    cin >> u2.licznik;
    cout<<"podaj mianownik drugiego ulamka" << endl;
    cin >> u2.mianownik;
    cout<< "Co chcesz zrobic: "<<endl<<"[1] Mnozenie"<<endl<<"[2] Dodawanie"<<endl<<"[3] Odejmowanie"<<endl<<"[4] Dzielenie"<<endl<<"Twoj wybor: ";
    int wybor;
    cin>>wybor;

switch(wybor)
{
case 1:

    u3=mnozenie(u1,  u2);
    cout <<"wynik mnozenia: "<< u3.licznik << "/" << u3.mianownik <<endl;
    break;

case 2:

    u4=dodawanie(u1, u2);
    cout <<"wynik dodawiania: "<< u4.licznik << "/" << u4.mianownik <<endl;
     break;
case 3:

        u5=odejmowanie(u1, u2);
        if(u5.licznik!=0){
      cout <<"Wynik odejmowania: "<< u5.licznik <<"/"<< u5.mianownik<<endl;}
      else
      cout <<"Wynik odejmowania: 0"<<endl;
     break;
case 4:

        u6=dzielenie(u1, u2);
     cout <<"Wynik dzielenia: "<< u6.licznik <<"/"<< u6.mianownik<<endl;

    break;

}
}





