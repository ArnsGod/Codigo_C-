/*Fecha: 2024/01/12*/
#include "iostream"
using namespace std;

//#define PI 3.1416; //Definimos una constante llamada PI

int main()
{
	const float PI = 3.1416; //DEFINIMOS UNA CONSTANTE LLAMADA PI, SIEMPRE EN MAYUSCULA LAS CONSTANTES(CONST)
	double diametro, circuferencia;
	circuferencia=40;
	diametro=circuferencia/PI;
	cout << "El diametro de la circuferencia='40': "<< diametro << endl;
	/*Cuando se le agrega la funcion endl da error ya que PI esta definido y endl solo funciona con dunciones como int*/
	//cout << "Mostrando el valor de PI: "<< PI << endl;
	//PI = 0;//ERROR POR ASIGNACION DE UNA VARIABLE DE SOLO LECTURA
	return 0;
}
