#include <iostream>

using namespace std;

int n1, n2; // Variables globales

//Realizar una funcion para recibir un parametro y determinar si el parametro es par o inpar
//Si es par true o impar false

bool esPar(int numero)
{
	return numero%2==0;
}

/*
bool MaPar() {//Suma
	return (n1 + n2 ) % 2 == 0;
}

// Funci�n para determinar si la multiplicaci�n es par
bool SuPar() {//Multiplicacion
	return (n1 * n2) % 2 == 0;
}
*/
// Funci�n para realizar la suma
int sumar() {
	return n1 + n2;
}

// Funci�n para realizar la multiplicaci�n
int multiplicar() {
	return n1 * n2;
}

// Funci�n para ingresar valores
void ingresar() {
	cout << "Ingrese el primer valor: " << endl;
	cin >> n1; // Ingreso del primer valor
	cout << "Ingrese el segundo valor: " << endl;
	cin >> n2; // Ingreso del segundo valor
}

int main(int argc, char *argv[]) {
	ingresar(); // Llamada a la funci�n ingresar
	
	cout << "Suma de los n�meros: " << sumar() << endl;
	/*
	if (MaPar()) {
		cout << "La suma es par: True" << endl;
	} else {
		cout << "La suma es par: False" << endl;
	}
	*/
	cout << "Multiplicaci�n de los n�meros: " << multiplicar() << endl;
	/*
	if (SuPar()) {
		cout << "La multiplicaci�n es par: True" << endl;
	} else {
		cout << "La multiplicaci�n es par: False" << endl;
	}
	*/
	if (esPar(n1))
	{
		cout<<"El numero: "<<n1<<" es "<<"True = Par"<<endl;
	}
	else
	{
		cout<<"El numero: "<<n1<<" es "<<"False = Inpar"<<endl;
	}
	
	if (esPar(n2))
	{
		cout<<"El numero: "<<n2<<" es "<<"True = Par"<<endl;
	}
	else
	{
		cout<<"El numero: "<<n2<<" es "<<"False = Inpar"<<endl;
	}
	return 0;
}

