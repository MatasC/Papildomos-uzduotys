#include<iostream>
#include<stdlib.h>
using std::cout;
struct Taskas{int x; int y;};
int main() {
    Taskas Stac_1,Stac_2;
    std::cout<<"Iveskite pirmojo tasko koordinate:"<<std::endl;
    std::cout<<"x = ";std::cin>>Stac_1.x;
    std::cout<<"y = ";std::cin>>Stac_1.y;
    cout<<"Iveskite antrojo tasko koordinate:"<<std::endl;
    cout<<"x = ";std::cin>>Stac_2.x;
    cout<<"y = ";std::cin>>Stac_2.y;
    cout<<"Plotas yra "<<abs((Stac_1.x-Stac_2.x)*(Stac_1.y-Stac_2.y))<<std::endl;
    system("pause");
}
