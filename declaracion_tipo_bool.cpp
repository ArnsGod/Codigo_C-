//fecha 2024-01-12
#include "iostream"
using namespace std;

int main()
{
  //declaracion y uso de bool
	bool bO;//nombre del bool
	bO = true;//bool es igual a verdadero
			cout << "Variable con valor verdadero: "<<bO<<endl;
	bO = false;// bool es igual a falso
			cout << "Variable con valor falso: "<<bO<<endl;	
	//Asignacion de valores numericos
	/*solo hay que conocer una validacion, si es cero es Falso, si es diferente de cero es verdadero */
	bO = 0; // el valor se vera como falso
	cout << "Variable con valor 0: "<<bO<<endl;
	bO = 1; //el valor se vera como verdadero o true
	cout << "Variable con valor 1: "<<bO<<endl;
	bO = -100;//el valor se vera como verdadero o true
	cout << "Variable con valor 1: "<<bO<<endl;
	return 0;
}
