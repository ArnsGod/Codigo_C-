#include <iostream>
#include <cctype>  // La función tolower es una función estándar, se encuentra en la cabecera <cctype>
using namespace std;

int main() {
	char caracter;//tipo de caracter
	cout << "Ingrese una Letra" << endl;//Mensaje a ingresar un valor
	cin >> caracter;//toma de valor
	/*Esta función toma un carácter como argumento y devuelve el equivalente en minúsculas si es una letra mayúscula,
	Esta función es útil cuando deseas realizar comparaciones de caracteres que no distingan entre mayúsculas y minúsculas.*/
	caracter = tolower(caracter);// Convertir el caracter a minúscula
	
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


