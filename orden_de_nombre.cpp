#include <iostream>
#include <sstream>
using namespace std;

string Nombre, ApellidoP, ApellidoM;

void NombreUs()
{
	cout << "Ingrese su nombre completo: " << endl;
	getline(cin, Nombre); // Utilizamos getline para leer la línea completa, ya que el nombre puede contener espacios
}

void SepararNombre(string nombreCompleto)
{
	// Utilizamos un stringstream para separar las partes del nombre
	/*stringstream es un operador y lo que esta a lado es el nombre que se le da para ser usado 
	este operador separa la cadena en partes utilizando espacios en blanco como delimitadores.
	Esto significa que cuando se encuentra un espacio en blanco en la cadena, stringstream lo utiliza para dividir la cadena en partes.*/
	stringstream num(nombreCompleto);//stringstream  para dividir el nombre completo en nombre, apellido paterno y apellido materno
	num >> Nombre >> ApellidoP >> ApellidoM;//extracción (>>),puedes dividir la cadena en partes basadas en los espacios en blanco presentes en la cadena.
	
	// Convertir la primera letra de cada parte a mayúscula
	if (!Nombre.empty())
		Nombre[0] = toupper(Nombre[0]);
	if (!ApellidoP.empty())
		ApellidoP[0] = toupper(ApellidoP[0]);
	if (!ApellidoM.empty())
		ApellidoM[0] = toupper(ApellidoM[0]);
}

void ImprimirNombre()
{
	cout << ApellidoP + " " + ApellidoM + " " + Nombre << endl; //Imprime en el orden que se desea
}

int main(int argc, char *argv[])
{
	NombreUs();
	SepararNombre(Nombre);
	ImprimirNombre();
	
	return 0;
}
