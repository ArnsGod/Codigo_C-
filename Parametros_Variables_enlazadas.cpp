#include <iostream>
using namespace std;

//Parametros de variables enlazadas
//Funcions por paso de referencia

/*SIN (& = Andersar) no es posible mandar los parametros ya que la funcion
void no debuelve el valor sino que muere en el mismo*/
/*
void ingresar(int &numero)//& Andersar sirve para mandar parametos por referencia
{
	cout<<"Ingrese un numero"<<endl;
	cin>>numero;
}
*/
void ingresar(int &n1, int &n2) //Ingresa los valores
{
	cout<<"Ingrese un numero: ";
	cin>>n1;
	cout<<"Ingrese un numero: ";
	cin>>n2;
}
/*Por que no se pasa por referencia n1 y n2, por que ya las tenemos referenciadas
en el primero de ingresar, ya que no tiene ninguna cambio, resultodo sim embargo si
esta cambiando*/
void sumar(int n1,int n2, int &resultado)
{
	resultado = n1 + n2;
	
}

int main(int argc, char *argv[]) {
	int numero=0, n1, n2, resultado;//Inicializacion de la variable
	/*
	ingresar(numero);//lamada a la funcion void
	cout<<"El numero es:"<<numero<<endl;//Muestra del resultado
	*/
	ingresar(n1, n2); //toma los valores de n1 y n2
	sumar(n1, n2, resultado);//toma el valor de resultado
	cout<<"La suma es: "<<resultado<<endl;
	return 0;
}

