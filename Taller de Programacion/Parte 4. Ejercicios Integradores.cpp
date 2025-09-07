#include <iostream>
using namespace std;

int main()
{
    //PARTE 4: Ejercicios Integradores

    /*14. Crea un programa que simule un cajero automático: Muestra un menú con opciones (consultar
    saldo, depositar, retirar, salir). Usa variables, condicionales y bucles.*/
    cout<<"Simulador de cajero automatico\n";
    //Declarando variables
    float saldo = 0;
    int opcion;
    do
    {
        //Mostrando menu
        cout<<"=========== Menu =============\n";
        cout<<"1. Consultar saldo\n";
        cout<<"2. Depositar\n";
        cout<<"3. Retirar\n";
        cout<<"4. Salir\n";
        cout<<"Ingrese una opcion: ";
        cin>>opcion;

        //Ejecutando acciones segun la opcion
        switch (opcion)
        {
            case 1:
                cout<<"Su saldo es: "<<saldo<<"\n";
                break;
            case 2:
                float deposito;
                cout<<"Ingrese el monto a depositar: ";
                cin>>deposito;
                saldo += deposito;
                cout<<"Deposito exitoso. Su nuevo saldo es: "<<saldo<<"\n";
                break;
            case 3:
                float retiro;
                cout<<"Ingrese el monto a retirar: ";
                cin>>retiro;
                if (retiro > saldo)
                {
                    cout<<"Fondos insuficientes. Su saldo es: "<<saldo<<"\n";
                }
                else
                {
                    saldo -= retiro;
                    cout<<"Retiro exitoso. Su nuevo saldo es: "<<saldo<<"\n";
                }
                break;
            case 4:
                cout<<"Gracias por usar el cajero automatico.\n";
                break;
            default:
                cout<<"Opcion invalida. Intente de nuevo.\n";
        }
    } while (opcion != 4);
    cout<<"\n\n";


    /*15. Realiza un programa que pida un número n y genere la secuencia Fibonacci hasta n términos.*/
    cout<<"Generando la secuencia Fibonacci hasta n terminos\n";
    //Declarando variables
    int n, a = 0, b = 1, siguiente;
    cout<<"Ingrese un numero entero positivo: ";
    cin>>n;
    cout<<"Secuencia Fibonacci: ";
    for (int i = 1; i <= n; i++)
    {
        cout<<a<<" ";
        siguiente = a + b;
        a = b;
        b = siguiente;
    }
    cout<<"\n\n";
    return 0;
}