#include<iostream>
#include<stdlib.h>
#include<stdio.h>
struct Datos_laikymas {int metai;int menesis; int diena;};
void Spausdinti (Datos_laikymas t)
{
    std::cout<<t.metai<<"/"<<t.menesis<<"/"<<t.diena<<std::endl;
}
int main() {
    Datos_laikymas Data;
    std::cin>>Data.metai>>Data.menesis>>Data.diena;
    system("pause");
    printf("%2d",Data.diena);
    Spausdinti(Data);
}
