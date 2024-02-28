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
        cout << "1. Problema para vocal, consonante o ninguna de las dos" << endl;
        cout << "2. Problema del cajero automatico" << endl;
        cout << "3. Problema para combinar mes y dias validos" << endl;
        cout << "0. Para SALIR!" << endl;
        cin >> opcion;
        switch(opcion)
        {
        case 1:
        {
            char letra;
            cout << "Ingrese una letra: "; cin >> letra;
            if((letra == 97) || (letra == 101) || (letra == 105) || (letra == 111) || (letra == 117)){
                cout << letra << " Es una vocal";
            }
            else if((letra >= 97) && (letra <= 122))
                cout << letra << " Es una consonante";
            else
                cout << letra << " No es ninguna de las dos";
            break;
        }
        case 2:
        {
            int dinero;
            cout << "Ingrese la cantidad de dinero que desea descomponer: "; cin >> dinero;
            cout << "50000: " << dinero/50000 << endl;
            dinero %= 50000;
            cout << "20000: " << dinero/20000 << endl;
            dinero %= 20000;
            cout << "10000: " << dinero/10000 << endl;
            dinero %= 10000;
            cout << "5000: " << dinero/5000 << endl;
            dinero %= 5000;
            cout << "2000: " << dinero/2000 << endl;
            dinero %= 2000;
            cout << "1000: " << dinero/1000 << endl;
            dinero %= 1000;
            cout << "500: " << dinero/500 << endl;
            dinero %= 500;
            cout << "200: " << dinero/200 << endl;
            dinero %= 200;
            cout << "100: " << dinero/100 << endl;
            dinero %= 100;
            cout << "50: " << dinero/50 << endl;
            dinero %= 50;
            cout << "faltante: " << dinero << endl;
            break;
        }
        case 3:
        {
            int mes, dia;
            cout << "Ingrese el mes: " << endl; cin >> mes;
            cout << "Ingrese el dia: " << endl; cin >> dia;
            //Para los meses de 31 dias
            if((mes < 1) || (mes > 12)){
                cout << mes << " Es un mes invalido!" << endl;
                }
            // Para los meses con 31 dias
            else if (((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7)|| (mes == 8) || (mes == 10) || (mes == 12)) && ((dia >=1) && (dia <=31))){
            cout << dia << " / " << mes << " es una fecha valida" << endl;
            }
            // Para los meses con 30 dias
            else if (((mes == 4) || (mes == 6) || (mes == 7) || (mes == 11)) && ((dia >=1) && (dia <=30))){
            cout << dia << " / " << mes << " es una fecha valida" << endl;
            }
            else if (mes == 2 && dia == 28){
                cout << dia << " / " << mes << " es una fecha valida";
            }
            else if (mes == 2 && dia == 29){
                cout << dia << " / " << mes <<  "Posible anio bisiesto";
            }
            else
                cout << "Fecha invalida";

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


