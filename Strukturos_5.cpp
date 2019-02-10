#include<iostream>
#include<string.h>
#include<stdlib.h>
using std::cin;
using std::cout;
struct Duomenys{std::string pavarde;int ugis; int rezultatyvumas; Duomenys* kitas;};
void Spausdinti(Duomenys *&root)
{
    Duomenys *t=root;
    for(int i=0;i<3;i++)
    {
        cout<<t->pavarde<<std::endl<<t->ugis<<std::endl<<t->rezultatyvumas<<std::endl;
        t=t->kitas;
    }
}
int main() {
    Duomenys *root=new Duomenys;
    Duomenys *t=root;
    int i=0;
    cout<<"Iveskite krepsininku duomenis"<<std::endl;
    do {
        cin>>t->pavarde>>t->ugis>>t->rezultatyvumas;
        t->kitas=new Duomenys;
        t=t->kitas;
        i++;
    } while(i<3);
    system("pause");
    Spausdinti(root);
    system("pause");
}
