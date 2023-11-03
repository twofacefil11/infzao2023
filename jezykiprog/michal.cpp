#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;
    int wybor;
    cout<<"1.silnia czy 2.potega (podaj 1 albo 2)"<<endl;
    cin>>wybor;
    switch(wybor)
    {
    case 1:
        float silnia;
        cout<<"siema, podaj silnie do policzenia !n= "<<endl;
        cin>>silnia;
        float liczba;
        liczba=silnia;
        for(int i=0;i<silnia;i++)
        {
            silnia=silnia-1;
            liczba=liczba*silnia;
        }
        cout<<"wynik silni to: "<<liczba<<endl;
        break;
    case 2:
        cout << "Siema, podaj podstawe potegi" << endl;
        cin>>a;
        cout<<"podaj wykladnik"<<endl;
        cin>>b;
    if(b==0)
    {
        cout<<"Wynik to: 1"<<endl;
    }
    else
    {
    int liczba=a;

    for(int i=0;i<(b-1);i++)
    {
        liczba=liczba*a;

    }
    cout<<"Wynik to: "<<liczba<<endl;
    }
    break;
    default:
        cout<<"podales zla liczbe"<<endl;
        break;
    }

    return 0;
}
