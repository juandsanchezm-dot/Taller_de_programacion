#include <iostream>
using namespace std;

int main()
{
    //PARTE 3: Bucles

    /*9. Imprime los números del 1 al 10 con un bucle for.*/
    cout<<"Imprimiendo los numeros del 1 al 10\n";
    //Declarando variables
    int a;
    //Operando y mostrando en pantalla
    for (a = 1; a <= 10; a ++)
    {
        cout<<a<<" ";
    }
    cout<<"\n\n";


    /*10. Calcula la suma de los primeros n números naturales (ingresados por teclado).*/
    cout<<"Calculando la suma de los primeros n numeros naturales\n";
    //Declarando variables
    int n, suma = 0;
    //Asignando valores
    cout<<"Ingrese un numero entero positivo: ";
    cin>>n;
    //Operando y mostrando en pantalla
    while (n <= 0)
    {
        cout<<"Numero invalido. Ingrese un numero entero positivo: ";
        cin>>n;
    }
    for (a = 1; a <= n; a ++)
    {
        suma += a;
    }
    cout<<"La suma de los primeros "<<n<<" numeros naturales es: "<<suma<<"\n";
    cout<<"\n\n";


    /*11. Dado un número, muestra su tabla de multiplicar (del 1 al 10).*/
    cout<<"Mostrando la tabla de multiplicar de un numero\n";
    //Declarando variables
    int num;
    //Asignando valores
    cout<<"Ingrese un numero: ";
    cin>>num;
    //Operando y mostrando en pantalla
    for (a = 1; a <= 10; a ++)
    {
        cout<<num<<" x "<<a<<" = "<<num * a<<"\n";
    }
    cout<<"\n\n";


    /*12. Crea un programa que pida una palabra y cuente cuántas vocales tiene.*/
    cout<<"Contando las vocales de una palabra\n";
    //Declarando variables
    string palabra;
    int contador = 0;
    //Asignando valores
    cout<<"Ingrese una palabra: ";
    cin>>palabra;
    //Operando y mostrando en pantalla
    for (char letra : palabra)
    {
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
        {
            contador++;
        }
    }
    cout<<"La palabra \""<<palabra<<"\" tiene "<<contador<<" vocales.\n";
    cout<<"\n\n";


    /*13. Usa un bucle while para pedir al usuario un número positivo. El programa solo termina cuando lo
    ingrese correctamente.
    */
    cout<<"Pidiendo un numero positivo\n";
    //Declarando variables
    int numero;
    //Asignando valores
    cout<<"Ingrese un numero entero positivo: ";
    cin>>numero;
    //Operando y mostrando en pantalla
    while (numero <= 0)
    {
        cout<<"Numero invalido. Ingrese un numero entero positivo: ";
        cin>>numero;
    }
    cout<<"Gracias. Ha ingresado el numero "<<numero<<".\n";
    return 0;
}