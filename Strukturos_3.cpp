#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct Datos_laikymas {int metai;int menesis; int diena;};
struct Informacija {std::string pavadinimas;Datos_laikymas grazinimas;};
void Spausdinti (Informacija t)
{
    std::cout<<t.pavadinimas<<std::endl;
    std::cout<<t.grazinimas.metai<<"/"<<t.grazinimas.menesis<<"/"<<t.grazinimas.diena<<std::endl;
}
void Duomenu_ivedimas(Informacija &t)
{
    std::cin>>t.pavadinimas>>t.grazinimas.metai>>t.grazinimas.menesis>>t.grazinimas.diena;
}
int main() {
    Informacija Isduotos_knygos;
    Duomenu_ivedimas(Isduotos_knygos);
    system("pause");
    Spausdinti(Isduotos_knygos);
    system("pause");
}
