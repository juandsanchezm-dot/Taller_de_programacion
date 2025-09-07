/*Taller de Programación
Temas: Variables – Operadores – Condicionales – Bucles
*/
#include <iostream>
using namespace std;

int main()
{
    //PARTE 1: Variables y Operadores

    /*1. Declara dos variables enteras a y b, asigna valores y muestra en pantalla la suma, resta,
    multiplicación y división.*/
    cout<<"Realizando operaciones basicas\n";
    //Declarando variables
    float a, b;
    //Asignando valores
    a = 10;
    b = 0;
    //Mostrando en pantalla
    cout<<"Suma:"<<a<<" + "<<b<<" = "<<a + b<<"\n";
    cout<<"Resta: "<<a<<" - "<<b<<" = "<<a - b<<"\n";
    cout<<"Multiplicacion: "<<a<<" x "<<b<<" = "<<a*b<<"\n";
    cout<<"Division: "<<a<<" ÷ "<<b<<" = "<<a/b<<"\n";
    cout<<"\n\n";


    /*2. Calcula el área y el perímetro de un rectángulo dado su base y altura.*/
    cout<<"Hallando el area y perimetro de un rectangulo\n";
    //Declarando variables
    float base, altura;
    //Asignando valores
    cout<<"Ingrese el valor de la base del rectangulo: ";
    cin>>base;
    cout<<"Ingrese el valor de la altura del rectangulo: ";
    cin>>altura;
    //Mostrando en pantalla
    cout<<"Area del rectangulo: "<<base*altura<<"\n";
    cout<<"Perimetro del rectangulo: "<<(base*2)+(altura*2)<<"\n";
    cout<<"\n\n";


    /*3. Dado un número en grados Celsius, conviértelo a Fahrenheit. Fórmula: F = (C × 9/5) + 32*/
    cout<<"De grados Celsius a Fahrenheit\n";
    //Declarando variables
    float celsius, fahrenheit;
    //Asignando valores
    cout<<"Ingrese un numero: ";
    cin>>celsius;
    fahrenheit = (celsius*9/5) + 32;
    //Mostrando en pantalla
    cout<<celsius<<" grados Celsius equivalen a: "<<fahrenheit<<" Fahrenheit\n";
    cout<<"\n\n";


    /*4. Escribe un programa que reciba 3 notas de un estudiante y calcule el promedio.*/
    cout<<"Calculando el promedio de tres notas";
    //Declarando variables
    float c, d, e, promedio;
    //Asignando valores
    cout<<"Ingrese su primer nota: ";
    cin>>c;
    cout<<"Ingrese su segunda nota: ";
    cin>>d;
    cout<<"Ingrese su tercer nota: ";
    cin>>e;
    promedio = (c + d + e) / 3;
    //Mostrando en pantalla
    cout<<"Promedio: "<<promedio;"\n";
    return 0;
}