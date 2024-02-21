#include <iostream>

using namespace std;
int potencia(int base, int ex); //Prototipo de la funcion
int main ()
{
    int opcion = 1;
    cout << "************Solucion practica 1************" << endl;
    while (opcion != 0)
    {
        cout << endl;
        void limpiar_pantalla();
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Para el modulo de una division" << endl;
        cout << "2. Para saber si un numero es par o impar" << endl;
        cout << "6. Ejercicio de potencias" << endl;
        cout << "0. Para SALIR!" << endl;
        cin >> opcion;
        switch(opcion)
        {
        case 1:
        {
            int num1, num2;
            cout << "Hola";
            break;
        }
        case 2:
        {
            int num1;
            break;
        }
        case 6:
        {
            int n1, n2;
            cout << "Ejecutando el punto 6..." << endl;;
            cout << "ingrese la base: "; cin >> n1;
            cout << "ingrese el exponente: "; cin >> n2;
            potencia(n1, n2);
            cout << potencia << endl;
        }



        default:
            if(opcion != 0)
                cout << "Seleccione una opcion valida!!!!" << endl;
        }
    }
    return 0;
}
int potencia(int base, int ex)
{
    int x = 1;
    for(int i = 0; i < ex; i++)
    {
        x *= base;
    }
    return x;
}


