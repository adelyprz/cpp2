#include <iostream>
#include <time.h>
#include <algorithm>

using namespace std;

string libros[2][2];

void cargarLibros(){
    libros[0][0] = "Algoritmos";
    libros[0][1] = "Algoritmos y Programacion (Guia para Docentes)";
    
    libros[1][0] = "Bases de Datos";
    libros[1][1] = "Apuntes de Bases de Datos 1";
    
    //libros[2][0] = "Algoritmos";
    //libros[2][1] = "Algoritmos y Programacion (Guia para Docentes)";

}

int main (int arc, char const *argv[])
{
    cargarLibros();

    srand (time(NULL));


    bool salir = false;

    while(salir == false)
    {
        string buscar = "";
        system("cls");
        cout << "Ingrese la descripcion del libro que busca: ";
        cin >> buscar;

        //busqueda
        for (int i = 0; i < 2; i++)
        {
            string libro = libros[i][1];
            string libroMinuscula = libro;

            //Transforma toda la cadena de caracteres a minusculas para mejorar la precision de busqueda
            transform(libroMinuscula.begin(), libroMinuscula.end(), libroMinuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);
            
            if (libroMinuscula.find(buscar) != string::npos){
                cout << "Libro encontrado: " << libro << endl;
                
                //Sugerencia de libros
                int sugerencia1 = rand() % 2;
                int sugerencia2 = rand() % 2;

                cout << "Lecturas sugeridas" << '\n';
                cout << "******************" << '\n';
                cout << "Sugerencia 1: " << libros[sugerencia1][1] << endl;
                cout << "Sugerencia 2: " << libros[sugerencia2][1] << endl;

                salir = true;
            }
        }

        if (salir == false)
        {
            char continuar = 'n';
            while (true)
            {
                system("cls");
                cout << "No se encontro el libro que busca. Desea continuar(S/n)_";
                cin >> continuar;

                if (continuar == 'S' || continuar == 's'){
                    break;
                }else if (continuar == 'n' || continuar == 'N'){
                    salir == true;
                    break;
                }
            }
        }
    }

    return 0;
}