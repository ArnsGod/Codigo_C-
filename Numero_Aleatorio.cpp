#include <iostream>
#include <random>
using namespace std;

int generarNumeroAleatorio()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<>distrib(0 , 99);
	return distrib(gen);
}

int main(int argc, char *argv[]) {
	int N, numeroAlazar;
	cout<<"Ingrese la cantidad  de numeros aleatorios a generar: "<<endl;
	cin>>N;
	for(int i = 0 ; i < N ; i++)
	{
		numeroAlazar = generarNumeroAleatorio();
		cout << numeroAlazar << " " << endl;
	}
		
	return 0;
}

