//Librerias
#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    bool salir = false;

    while(salir == false){
        //MENU PRINCIPAL DEL PROGRAMA
        int opcion;
        system("cls");
        cout << "******************" << endl;
        cout << "  MENU DE JUEGOS  " << endl;
        cout << "******************" << endl;
        cout << endl;
        cout << "Seleccione un Juego\n";
        cout << "1 - StarShip" << endl;
        cout << "2 - Snake" << endl;
        cout << "3 - SALIR" << endl;
        cout << "Ingrese un numero del menu para iniciar un juego: ";
        cin >> opcion;
    
        //En caso de que se elija una opcion, mostrará uno de los dos juegos
        switch(opcion){
        
        case 1:
            starShip();
            break;
        
        case 2:
            snake();
            break;

        case 3:
            salir = true;
            break;

        default:
            break;
        }
    }
    
    return 0;
}