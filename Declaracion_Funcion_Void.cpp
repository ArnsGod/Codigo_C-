#include <iostream>
#include <random>
#include <limits>
using namespace std;

// Variables globales
int n1, n2;

// Declaracion de funcion
/*eliminamos los parámetros de la función sumar y la función ahora utiliza las variables globales n1 y n2 directamente*/
int sumar()
{
	int suma;
	suma = n1 + n2;
	return suma;
}

/*La función solicitarNumero se encarga de pedir al usuario que ingrese los valores para n1 y n2*/
void solicitarNumero()
{
	cout << "Ingrese el primer numero:";
	cin >> n1;
	cout << "Ingrese el segundo numero:";	
	cin >> n2;
}
/*en el main, puedes llamar a solicitarNumero para obtener nuevos valores y después llamar a sumar() 
para realizar la suma utilizando las variables globales actualizadas.*/
int main(int argc, char *argv[]) {
	solicitarNumero();
	cout << "Suma de dos numeros: " << sumar() << endl;
	
	solicitarNumero();
	cout << "Suma de dos numeros: " << sumar() << endl;
	
	return 0;
}
