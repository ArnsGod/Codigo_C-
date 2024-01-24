#include <iostream>
#include <cstdlib>//para funciones relacionadas con la memoria y otros
#include <ctime>//para funciones relacionadas con el tiempo
#include <limits>//para obtener los límites de tipos de datos
using namespace std;

// Función para generar un número aleatorio en el rango [minimo, maximo]
/*Es una función que toma un valor mínimo y máximo como argumentos y devuelve un número aleatorio dentro de ese rango. 
Utiliza rand() para generar un número aleatorio y la operación % para ajustar ese número al rango deseado.*/
int generarNumeroAleatorio(int minimo, int maximo) {
	return rand() % (maximo - minimo + 1) + minimo;
}

int main(int argc, char *argv[]) {
	int N;
	cout << "Ingrese la cantidad de numeros aleatorios a generar: ";
	cin >> N;
	/*Declara variables para almacenar los números aleatorios y los valores máximo y mínimo encontrados.*/
	int numeroAleatorio, maximo = numeric_limits<int>::min(), minimo = numeric_limits<int>::max();
	
	// Inicializar la semilla para rand() con el tiempo actual
	/* Inicializa la semilla para rand() con el tiempo actual. Esto se hace para que la secuencia de números aleatorios sea diferente en cada ejecución del programa*/
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
	cout << "El numero mas pequeño generado es: " << minimo << endl;
	
	return 0;
}

