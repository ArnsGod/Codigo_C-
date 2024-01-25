#include <iostream>
#include <cstdlib>//Libreria para utilizar rand()
using namespace std;

int aleatorio()//Funcion de numeros aleatorios
{
	return rand() % 100;//Genera numeros aleatorios
}
bool esImpar(int numero) {//Funcuon booleana para determinar si es impar
	return numero % 2 != 0;//para determinar si es un numero impar
}

int main(int argc, char *argv[]) {//funcion principal
	int n, c=0,num; //Definicion de variables
	cout<<"Generar N numeros Impares, ingrese n:";
	cin>>n;
	while(c<n)//Secuencia de repetir
	{
		num = aleatorio(); //Llamada al generador de numeros aleatorio
		if(esImpar(num))//Secuencia para determinar si es un numero impar
		{
			c++;//Sumar el contador
			cout<<"Impar["<<c<<"]:"<<num<<endl;//Imprimir los valores del contador junto a los numeros impares aleatorio
		}
	}
	return 0;
}

