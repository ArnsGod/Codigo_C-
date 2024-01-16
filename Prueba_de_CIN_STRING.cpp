#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string cadena1, cadena2, universidad; //cadenas de valores agregados
	cadena1="Bienvenido a"; //cadena de valores 1
	cadena2="universidad"; //cadena de valores 2
	/*El string se pueden agregar cadenas dentro de cout */
	//cout<<cadena1<<" la "<<cadena2<<endl;//unica constante agregada es la "La"
	/*Siempre debe haber una peticion antes de ingresar un valor*/
	cout<<"ingrese el nombre de la universidad: ";
	cin>>universidad;
	/*Las impresiones tiene que ser endentibles*/
	cout<<cadena1<<" la "<<cadena2<<" "<<universidad<<endl;
	return 0;
}

