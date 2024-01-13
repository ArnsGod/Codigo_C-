#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero, resultado;
		cout << "Ingres el numero"<< endl;
		cin>>numero;
		cin>>resultado;
	//SOLICITAR UN NUMERO Y VERIFICAR SI ES PAR O IMPAR
	if(numero %2 == 0)
	{
		cout << "Es un numero par" << endl;
	}
	else
	{
		cout << "!!No es un numero par!!" << endl;
	}
	
	if(resultado == (10+5))
	{
		cout<<"!!el valor correcto!!"<<endl;
	}
	else
	{
		cout<<"el valor es incorrecto!!"<<endl;
	}
	return 0;
}

