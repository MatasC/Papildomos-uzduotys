#include<iostream>
#include<stdio.h>
using namespace std;
void Remelio_spausdinimas(string sveikinimas, int tarpai, int stulpeliai, int eilute)
{
    for(int i=0;i<stulpeliai;i++)
    {
        printf("*");
    }
    printf("\n");
    for(int i=0;i<(eilute-3)/2;i++)
    {
        printf("*");
        for(int e=0;e<stulpeliai-2;e++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    printf("*");
    for(int i=0;i<tarpai;i++)
    {
        printf(" ");
    }
    cout<<sveikinimas;
    for(int i=0;i<tarpai;i++)
    {
        printf(" ");
    }
    printf("*\n");
    for(int i=0;i<(eilute-3)/2;i++)
    {
        printf("*");
        for(int e=0;e<stulpeliai-2;e++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for(int i=0;i<stulpeliai;i++)
    {
        printf("*");
    }
    printf("\n");
}
int main()
{
    string vardas, sveikinimas;
    int tarpai=-1;
    printf("Koks Jusu vardas: ");
    cin>>vardas;
    printf("Iveskite remelio dydi (nuo 1 iki 10): ");
    while(tarpai<=0 || tarpai>10)
    {
        cin>>tarpai;
    }
    printf("\n");
    if(vardas.back() == 's')
    {
        sveikinimas = "Sveikas, " + vardas + "!";
    }
    else
    {
        sveikinimas = "Sveika, " + vardas + "!";
    }
    const int eilute = tarpai*2+3;
    const int stulpeliai = sveikinimas.size() + tarpai*2+2;
    Remelio_spausdinimas(sveikinimas,tarpai,stulpeliai,eilute);
}
