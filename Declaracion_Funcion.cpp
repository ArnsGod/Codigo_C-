#include <iostream>
#include <random>
#include <limits>
using namespace std;
//variables globales
int n1, n2;
//Declaracion de funcion
int sumar(int num1, int num2)
{
	int suma;
	suma = num1 + num2;
	return suma;
}

void solicitarNumero()
{
	cout<<"ingrese el primer numero:";
	cin>>n1;
	cout<<"ingrese el primer numero:";
	cin>>n2;
}

int main(int argc, char *argv[]) {
	
	/*
	int num1, num2;  // Declarar las variables num1 y num2
	cout << "Ingrese el primer valor: " << endl;
	cin >> num1;  // Leer el primer valor desde la entrada estándar
	cout << "Ingrese el segundo valor: " << endl;
	cin >> num2;  // Leer el segundo valor desde la entrada estándar
	int resultado = sumar(num1, num2);  // Llamar a la función sumar con los valores ingresados
	// Mostrar el resultado
	cout << "Suma de dos numeros: " << resultado << endl;
//-------------------------------------------------------------------------//
	cout << "Ingrese el primer valor: " << endl;
	cin >> num1;  // Leer el primer valor desde la entrada estándar
	cout << "Ingrese el segundo valor: " << endl;
	cin >> num2;  // Leer el segundo valor desde la entrada estándar
	// Mostrar el resultado
	cout << "Suma de dos numeros: " << resultado << endl;
	*/
	solicitarNumero();
	cout << "Suma de dos numeros: " << sumar(n1, n2) << endl;
	solicitarNumero();
	cout << "Suma de dos numeros: " << sumar(n1, n2) << endl;
	
	return 0;
}

