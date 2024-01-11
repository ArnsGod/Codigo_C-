
/*
Titulo:Primer programa con comentario
Autor: Juan David Meza Gonzalez
Descripcion: Primer programa para analizar su estructura
Fecha: 2024-01-10
*/

#include "iostream" // Inclusion de la libreria de entrada y salida
using namespace std;// El uso de espacio de nombre para STD de la I/O 

int main()//Funcion principal main para retornar un entero
{
	int numero;//Declaracion de la variable numero como entero
	
	numero = 5 + 5;//asignacion de la suma de 5+5 a la variable numero
	
	//printf("El resultado es: %d\n", numero);//impresion de la variable numero en C
	/*%d\n = especificar c�mo se debe formatear la salida de datos cuando se utiliza una funci�n de impresi�n como printf
	%d = Este es un marcador de posici�n para un valor entero. Cuando usas este marcador de posici�n, debes proporcionar un entero como argumento en la funci�n de impresi�n, que se colocar� en ese lugar en la cadena de formato.
	\n =  Este es un car�cter de nueva l�nea. Cuando se imprime, genera un salto de l�nea, moviendo el cursor a la siguiente l�nea.
	printf = Impresion de valores*/
	
	std::cout << "El resultado es: " << numero << std::endl;//impresion de la variable numero en C++ 
	/*std= llamada del objeto 
	cout = los caracteres fluyen hacia la consola 
	endl = salto de linea*/
	return 0;//retorno de 0para finalizar el programa
}
