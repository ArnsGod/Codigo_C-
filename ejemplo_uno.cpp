
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
	
	/*std= llamada del objeto 
	cout = los caracteres fluyen hacia la consola 
	endl = salto de linea*/
	
	std::cout << "El resultado es: " << numero << std::endl;//impresion de la variable numero y adicion al final un salto de linea.

	return 0;//retorno de 0para finalizar el programa
}

