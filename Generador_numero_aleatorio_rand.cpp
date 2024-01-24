#include <iostream>
#include <cstdlib>//para funciones relacionadas con la memoria y otros
#include <ctime>//para funciones relacionadas con el tiempo
#include <limits>//para obtener los l�mites de tipos de datos
using namespace std;

// Funci�n para generar un n�mero aleatorio en el rango [minimo, maximo]
/*Es una funci�n que toma un valor m�nimo y m�ximo como argumentos y devuelve un n�mero aleatorio dentro de ese rango. 
Utiliza rand() para generar un n�mero aleatorio y la operaci�n % para ajustar ese n�mero al rango deseado.*/
int generarNumeroAleatorio(int minimo, int maximo) {
	return rand() % (maximo - minimo + 1) + minimo;
}

int main(int argc, char *argv[]) {
	int N;
	cout << "Ingrese la cantidad de numeros aleatorios a generar: ";
	cin >> N;
	/*Declara variables para almacenar los n�meros aleatorios y los valores m�ximo y m�nimo encontrados.*/
	int numeroAleatorio, maximo = numeric_limits<int>::min(), minimo = numeric_limits<int>::max();
	
	// Inicializar la semilla para rand() con el tiempo actual
	/* Inicializa la semilla para rand() con el tiempo actual. Esto se hace para que la secuencia de n�meros aleatorios sea diferente en cada ejecuci�n del programa*/
	srand(static_cast<unsigned int>(time(nullptr)));
	
	cout << "Numeros aleatorios generados" << endl;
	
	for(int i = 0; i < N; i++) {
		numeroAleatorio = generarNumeroAleatorio(0, 99);
		cout << numeroAleatorio << " ";
		
		if(numeroAleatorio > maximo) 
		{
			maximo = numeroAleatorio;
		}
		if(numeroAleatorio < minimo)
		{
			minimo = numeroAleatorio;
		}	
	}
	
	cout << "\nEl numero mas grande generado es: " << maximo << endl;
	cout << "El numero mas peque�o generado es: " << minimo << endl;
	
	return 0;
}

