#include <iostream>
#include <random>
#include <limits>
using namespace std;

// Función para generar un número aleatorio en el rango [minimo, maximo]
void generarNumeroAleatorio(int N, int minimo, int maximo) {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distrib(minimo, maximo);
	
	int numeroAleatorio, maximoGen = numeric_limits<int>::min(), minimoGen = numeric_limits<int>::max();
	
	cout << "Numeros aleatorios generados" << endl;
	
	for(int i = 0; i < N; i++) {
		numeroAleatorio = distrib(gen);
		cout << numeroAleatorio << " ";
		
		if(numeroAleatorio > maximoGen) {
			maximoGen = numeroAleatorio;
		}
		if(numeroAleatorio < minimoGen) {
			minimoGen = numeroAleatorio;
		}
	}
	
	cout << "\nEl numero mas grande generado es: " << maximoGen << endl;
	cout << "El numero mas pequeño generado es: " << minimoGen << endl;
	
}

int main(int argc, char *argv[]) {
	int N;
	cout << "Ingrese la cantidad de numeros aleatorios a generar: ";
	cin >> N;

	int minimo = 0, maximo = 99;
		
	generarNumeroAleatorio(N, minimo, maximo);
	
	return 0;
}
