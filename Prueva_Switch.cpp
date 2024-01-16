#include <iostream>
#include <cctype>  // La funci�n tolower es una funci�n est�ndar, se encuentra en la cabecera <cctype>
using namespace std;

int main() {
	char caracter;//tipo de caracter
	cout << "Ingrese una Letra" << endl;//Mensaje a ingresar un valor
	cin >> caracter;//toma de valor
	/*Esta funci�n toma un car�cter como argumento y devuelve el equivalente en min�sculas si es una letra may�scula,
	Esta funci�n es �til cuando deseas realizar comparaciones de caracteres que no distingan entre may�sculas y min�sculas.*/
	caracter = tolower(caracter);// Convertir el caracter a min�scula
	
	// Funcion para determinar si es una vocal
	switch (caracter) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		cout << "Es una vocal" << endl;
		break;
	default:
		cout << "No es una vocal" << endl;
	};
	
	return 0;
}


