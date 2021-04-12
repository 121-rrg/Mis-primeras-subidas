
#include <iostream>
using namespace std;

void usoLocal(void);                      // prototipo de función 
void usoStaticLocal(void);                // prototipo de función 
void usoGlobal(void);                     // prototipo de función 
int x = 1;                                // variable global 
int main()
{
    int x = 5;                            // variable local a main 

    cout<<"x local en el alcance externo de main es "<<x<<endl;
    {       // inicia nuevo alcance
    int x = 7;
    cout<<"x local en el alcance interior de main es "<<x<<endl;
    }      // finaliza nuevo alcance 

    cout << "x local en el alcance externo de main es "<<x<<endl; 
    usoLocal();                 // usoLocal tiene x local 
    usoStaticLocal();           // usoStaticLocal tiene x static local 
    usoGlobal();                // usoGlobal utiliza x global 
    usoLocal();                 // usoLocal reinicializa su x local 
    usoStaticLocal();           // static local x retiene su valor previo 
    usoGlobal();                // x global retiene también su valor 
    cout<<"\n x local en main es "<<x<<endl; 
    return 0;                   // indica terminación exitosa 
}                               // fin de main

// usoLocal reinicializa la variable local x durante cada llamada
void usoLocal( void ){
int x = 25; // inicialia cada vez que se llama a usoLocal
cout<<endl<< "x local es "<<x<<" al entrar a usoLocal"<<endl;
++x;
cout <<"x local es " << x<< " al salir de usoLocal" << endl;
} // fin de la función usoLocal
//usoStaticLocal inicializa a la variable static local x sólo la
// primera vez que se llama a la función; el valor de x se guarda
// entre las llamadas a esta función
void usoStaticLocal( void ){
// se inicializa la primera vez que se llama a usoStaticLocal.
static int x = 50;
cout<<endl<<"local static x es "<<x<<" al entrar a usoStaticLocal"
<< endl;
++x;
cout<<"local static x es "<<x<<" al salir de usoStaticLocal"<<endl;
} // fin de la función usoStaticLocal
// usoGlobal modifica la variable global x durante cada llamada
void usoGlobal( void ){
cout<<endl<< "x global es "<<x<< " al entrar a usoGlobal" << endl;
x *= 10;
cout<<"x global es "<<x<< " al salir de usoGlobal" << endl;
} // fin de la función usoGlobal