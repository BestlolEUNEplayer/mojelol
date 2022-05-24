#include <iostream>

using namespace std;

float ciaga(int n)
{
    if(n==1)
        return 2;
    else
        return (3* ciaga(n-1) + 0.5);
}


int main()
{


    for (int i=1; i<=7; i++)
        cout <<ciaga(i)<<endl;
    return 0;
}
