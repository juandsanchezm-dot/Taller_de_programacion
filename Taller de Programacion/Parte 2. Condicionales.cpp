#include <iostream>
using namespace std;

int main()
{
    //PARTE 2: Condicionales

    /*5. Dado un número entero, determina si es par o impar.*/
    cout<<"Determinando si es par o impar\n";
    //Declarando variables
    int a; 
    //Asignando valores
    cout<<"Ingrese un numero entero positivo: ";
    cin>>a;
    //Calculando y mostrando en pantalla
    if (a & 1)
    {
        cout<<"El numero "<<a<<" es impar\n";
    }
    else
    {
        cout<<"El numero "<<a<<" es par\n";
    }
    cout<<"\n\n";

    /*6. Pide la edad de una persona e imprime si es menor de edad o mayor de edad.*/
    cout<<"Determinando si es menor de edad o mayor de edad\n";
    //Declarando variables
    int edad;
    //Asignando valores
    cout<<"Ingrese su edad: ";
    cin>>edad;
    //Calculando y mostrando en pantalla
    if (edad >= 18)
    {
        cout<<"Es mayor de edad";
    }
    else
    {
        cout<<"Es menor de edad";
    }
    cout<<"\n\n";


    /*7. Crea un programa que reciba el sueldo de un trabajador y calcule el aumento: Si gana menos de
    1,000 → aumento del 15%. Si gana entre 1,000 y 2,000 → aumento del 10%. Si gana más de 2,000 →
    aumento del 5%.*/
    cout<<"Determinando el aumento segun el sueldo\n";
    //Declarando variables
    float sueldo;
    //Asignando valores
    cout<<"Ingrese su sueldo: ";
    cin>>sueldo;
    //Calculando y mostrando en pantalla
    if (sueldo < 1000)
    {
    cout<<"Sueldo: "<<sueldo<<"\nAumento: "<<sueldo * 0.15<<"\nTotal: "<<(sueldo * 0.15)+sueldo<<"\n";
    } 
    else if (sueldo >= 1000 && sueldo <= 2000)
    {
        cout<<"Sueldo: "<<sueldo<<"\nAumento: "<<sueldo * 0.1<<"\nTotal: "<<(sueldo * 0.1)+sueldo<<"\n";
    }
    else
    {
        cout<<"Sueldo: "<<sueldo<<"\nAumento: "<<sueldo * 0.05<<"\nTotal: "<<(sueldo * 0.05)+sueldo<<"\n";
    }
    cout<<"\n\n";


    /*8. Un programa que pida tres números y muestre el mayor de ellos.*/
    cout<<"Determinando el numero mayor de tres numeros\n";
    //Declarando variables
    float b, c, d;
    //Asignando valores
    cout<<"Ingrese el primer numero: ";
    cin>>b;
    cout<<"Ingrese el segundo numero: ";
    cin>>c;
    cout<<"Ingrese el tercer numero: ";
    cin>>d;
    //Calculando y mostrando en pantalla
    if (b < c && c > d)
    {
        cout<<"El "<<c<<" es el numero de mayor valor entre "<<b<<" y "<<d;
    }
    else if (c < b && b > d)
    {
        cout<<"El "<<b<<" es el numero de mayor valor entre "<<c<<" y "<<d;
    }
    else if (b < d && d > c)
    {
        cout<<"El "<<d<<" es el numero de mayor valor entre "<<b<<" y "<<c;
    }
    else 
    {
        cout<<"Los numeros "<<a<<", "<<b<<" y "<<c<<" son iguales";
    }
    return 0;
}
