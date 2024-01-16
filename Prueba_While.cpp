#include <iostream>
using namespace std;
/*
Datos de inicion del programa
Menu 
1.OPCION uno
2.OPCION DOS
0.SALIR
*/

int main(int argc, char *argv[]) {
	int opcion;//definicion de opcion
	opcion = 1;//Valor dado a opcion 
	while(opcion != 0)//Repite el menu hasta que opcion sea diferente de 0
	{
		/*Menu mostrado al usuario con las opcion a su disposicion*/
		cout<<"MENU PRINCIPAL"<<endl;
		cout<<"1.OPCION UNO"<<endl;
		cout<<"2.OPCION DOS"<<endl;
		cout<<"0.SALIR"<<endl;
		cin>>opcion;//Toma de valor del usuario 
		/*Toma de los casos segun el valor dado en la variable opcion*/
		switch(opcion)//Menu 
		{
			case 1://Opcion uno
				cout<<"ELIGIO LA OPCION 1"<<endl;
				break;
			case 2://Opcion dos
				cout<<"ELIGIO LA OPCION 2"<<endl;
				break;
			case 0://Opcion cero
				cout<<"SALIENDO....."<<endl;
				break;
				/*Default lo utilizamos si el usuario no ingresa una opcion que se encuantra disponible*/
			default:cout<<"NO INGRESO UNA OPCION VALIDA"<<endl;
		};
	};
	return 0;
}

