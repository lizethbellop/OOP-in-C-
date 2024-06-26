#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona{
	private:
		int edad;
		string nombre;

	public:
		Persona(int, string);
		void leer();
		void correr();
};

Persona::Persona(int _edad, string _nombre){
	edad = _edad;
	nombre = _nombre;
}

void Persona::leer(){
	cout << "Soy " << nombre << " y estoy leyendo un libro\n";
}

void Persona::correr(){
	cout << "Soy " << nombre << " y estoy corriendo un maraton y tengo " << edad << "anios\n"; 
}

int main(){
	Persona p1 = Persona(20, "Liz"):
	Persona p2(19, "Maria");
	Persona p3(19, "Gabriel");

	p1.leer();

	p2.correr();

	p3.leer();

	p3.correr();

	system("pause");

	return 0;
}
