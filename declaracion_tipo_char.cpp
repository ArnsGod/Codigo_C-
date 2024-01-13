#include "iostream"
using namespace std;

int main()
{
	//definicion y asignacion de valores char
	char letra; //definir la variable letra como char
	char vocal_min;
	char vocal_may;
	char arro;
	letra = 'L'; 
	
	cout<< "imprimimiendo letra 'L' "<<letra<<endl;
	/*letra = LL; error de asigancion, no puede con mas de un caracter */
	//asignacion valores numericos
	letra = 65; // ASCII es la letra A
	cout<< "imprimimiendo letra '65' "<<letra<<endl;
	//---vocales mayuscula y minuscula con acento ---
	//----Minusculas----
	vocal_min = 133; // ASCII es la à
	cout<< "imprimimiendo letra '133' "<<vocal_min<<endl;
	vocal_min = 130; // ASCII es la è
	cout<< "imprimimiendo letra '130' "<<vocal_min<<endl;
	vocal_min = 141; // ASCII es la ì
	cout<< "imprimimiendo letra '141' "<<vocal_min<<endl;
	vocal_min = 149; // ASCII es la ò
	cout<< "imprimimiendo letra '149' "<<vocal_min<<endl;
	vocal_min = 151; // ASCII es la ù
	cout<< "imprimimiendo letra '151' "<<vocal_min<<endl;
	//----Mayusculas----
	vocal_may = 181; // ASCII es la À
	cout<< "imprimimiendo letra '181' "<<vocal_may<<endl;
	vocal_may = 212; // ASCII es la È
	cout<< "imprimimiendo letra '212' "<<vocal_may<<endl;
	vocal_may = 214; // ASCII es la Ì
	cout<< "imprimimiendo letra '214' "<<vocal_may<<endl;
	vocal_may = 227; // ASCII es la Ò
	cout<< "imprimimiendo letra '227' "<<vocal_may<<endl;
	vocal_may = 233; // ASCII es la Ù
	cout<< "imprimimiendo letra '233' "<<vocal_may<<endl;
	//--- arroba "@" ---
	arro = 64; // ASCII es la "@"
	cout<< "imprimimiendo letra '64' "<<arro<<endl;
	//--- barra invertida "\" 
	arro = 92; // ASCII es la "\"
	cout<< "imprimimiendo letra '92' "<<arro<<endl;
	/*el char nombre [], es para mostrar un nombre dentro de los cochetes, [] = podemos decir que caracter queremos que muestre segun la cantidad de caracteres*/
	char nombre[] = "JOSE";
		cout<<"IMPRIMENDO EL NOMBRE: "<< nombre<<endl;
		cout<<"IMPRIMENDO EL NOMBRE[0] "<< nombre[0]<<endl;
		cout<<"IMPRIMENDO EL NOMBRE[1] "<< nombre[1]<<endl;
		cout<<"IMPRIMENDO EL NOMBRE[2] "<< nombre[2]<<endl;
		cout<<"IMPRIMENDO EL NOMBRE[3] "<< nombre[3]<<endl;
		//Convertir en minusculas
		/*En esta ocacion se hace para cada uno la conversion a minuscula*/
		nombre[0]='j';
		nombre[1]='o';
		nombre[2]='s';
		nombre[3]='e';
		cout<<"IMPRIMENDO EL NOMBRE: "<< nombre<<endl;
	return 0;
}

