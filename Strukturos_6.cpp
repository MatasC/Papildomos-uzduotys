#include<iostream>
#include<stdlib.h>
struct Krepsininkas{std::string pavarde;int ugis; int rezultatyvumas;};
int main()
{
    Krepsininkas duomenys[5], *rodykle;
    rodykle = duomenys;
    int temp=1000000;
    for(int i=0;i<5;i++)  //Irasom duomenis
    {
        std::cin>>rodykle->pavarde>>rodykle->ugis>>rodykle->rezultatyvumas;
        rodykle++;
    }
    system("pause");
    for(int i=0;i<5;i++)
    {
        rodykle = duomenys;
        for(int w=0;w<5;w++)
        {
            if(duomenys[w].rezultatyvumas>rodykle->rezultatyvumas && duomenys[w].rezultatyvumas<temp)
            {
                rodykle = &duomenys[w];
            }
        }
        std::cout<<rodykle->pavarde<<" "<<rodykle->ugis<<" "<<rodykle->rezultatyvumas<<std::endl;
        temp = rodykle->rezultatyvumas;
    }
    system("pause");

}
