//tabla de multiplicar
#include <iostream>////el preprocesador #include se incluye la libreria iostream que es la libreria nativa del lenguaje de programación C++
using namespace std; //namespace se usa para usar las opciones cin y cout, esta linea hace que se optimece el codigo std 

//ProgramaPrincipal 

int main ()
{
	int numero;
	int i;
	cout <<endl <<endl <<"TABLA DE MULTIPLICAR" <<endl <<endl;
	cout << "Digita un numero entero" <<endl <<endl; //indicamos en pantalla que el usuario digite un numero entero
	cin >> numero; //se asigna a la variable numero el dato que añade el usuario en pantalla
	cout <<endl;
	
	for(i=1; i <= 10; i++){ //i será nuestro indice o contador que ira recorriendo diez veces nuestra variable deseable
	//i++ significa que se va a hacer de uno en uno
		cout <<endl << numero << " * " << i << " = " << numero*i <<endl; //se imprime la tabla de multiiplicar con el numero de usuario
	}
	cout <<endl<<endl;
	
	system("pause");
	return 0;
}
