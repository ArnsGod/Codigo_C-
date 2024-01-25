#include <iostream>
using namespace std;

//Realizar un menu 3 opciones
//1 ingresar numero
//2 sumar los numeros 
//3 verificar si un numero es primo
//0 salir
//Todo con funciones parametros por referencia.
//***********-------------------------*****************
/*
// Prototipos de funciones
void ingresar(int &n1, int &n2);
void sumar(int n1, int n2, int &resultado);
bool esPrimo(int numero);
*/

// Definición de funciones
void ingresar(int &n1, int &n2) {
	cout << "Ingrese el primer numero: ";
	cin >> n1;
	cout << "Ingrese el segundo numero: ";
	cin >> n2;
}

void sumar(int n1, int n2, int &resultado) {
	resultado = n1 + n2;
}
/*
bool esPrimo(int numero) {
	if (numero <= 1) {
		return false; 
	}
	
	for (int i = 2; i * i <= numero; ++i) {
		if (numero % i == 0) {
			return false; 
		}
	}
	
	return true; 
}
*/
vodi esPrimo(int &numero)
{

}
void menu(int &opcion)
{
	cout << "****MENU****" << endl;
	cout << "1. INGRESO DE NUMEROS" << endl;
	cout << "2. SUMAR LOS NUMEROS" << endl;
	cout << "3. VERIFICAR SI UN NUMERO ES PRIMO" << endl;
	cout << "0. SALIR" << endl;
	cin >> opcion;
}

int main() {
	int opcion, n1, n2, resultado = 0; // Inicializar resultado para evitar problemas
	
	do {
		menu(opcion);
		switch (opcion) {
		case 1:
			ingresar(n1, n2);
			break;
		case 2:
			sumar(n1, n2, resultado);
			cout << "La suma es: " << resultado << endl;
			break;
		case 3:
			cout << "Ingrese un numero para verificar si es primo: ";
			cin >> n1;
			if (esPrimo(n1)) {
				cout << n1 << " es un numero primo." << endl;
			} else {
				cout << n1 << " no es un numero primo." << endl;
			}
			break;
		case 0:
			cout<<"Saliendo..."<<endl;
			break;
		default:
			cout<<"No es una opcion valida"<<endl;
		}
		
	} while (opcion != 0);
	
	return 0;
}

