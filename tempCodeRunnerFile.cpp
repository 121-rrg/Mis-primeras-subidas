#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int dado1,dado2;
string lanzar;



int main()
{
    while (true)
    {
        cout<<"--- Juego de dados, se gana con los numeros 4 , 6 , 8 y se pierden con los numeros 2 y 12 ---"<<endl<<endl;
        cout<<"Presione cualquier tecla para lanzar los dados: "<<endl;
        cin>>lanzar;
        system ("cls");
        for (int i=0;i<=1;i++)
        {
            srand (time (0));
            dado1=rand()%(6)+1;
            dado2=rand()%(6)+1; 
        }
        cout<<"Dado 1 ["<<dado1<<"]";
        cout<<" Dado 2 ["<<dado2<<"]"<<endl;
        cout<<"La suma de los dados es: ["<<dado1+dado2<<"]"<<endl;
        if (dado1+dado2 == 4 or dado1+dado2 == 6 or dado1+dado2 == 8)
        {
            cout<<"\n°°° El jugador gana, la casa pierde °°°"<<endl;
            break;
        }
        if (dado1+dado2 == 2 or dado1+dado2 == 12)
        {
            cout<<"\n*** La casa gana, el jugador pierde ***"<<endl;
            break;
        }
        cout<<"\n--- Vuelve a lanzar ---"<<endl;
        system("pause");
        system ("cls");
    }   
}