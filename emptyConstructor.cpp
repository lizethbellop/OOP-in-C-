#include <iostream>
#include<string>

using namespace std;

//Alumno-Atributos: nombre, matricula
//Metodos: constructor vacio, insertar, imprimir

class Alumno{
	private:
		string nombre;
		string matricula;
	public:
		Alumno();
		void insertar(string, string);
		string imprimir();
};

Alumno::Alumno(){
	nombre = "";
	matricula = "";
}

void Alumno::insertar(string n, string m){
	nombre = n;
	matricula = m;
}

string Alumno::imprimir(){
	return "Nombre " + nombre + " - " + matricula + "\n";
}

int main(){
	string n, m;

	Alumno nuevo = Alumno();

	cout << "Ingrese el nombre del alumno\n";
	cin >> n;
	cout << "Introduce la matricula\n";
	cin >> m;

	nuevo.insertar(n,m);
	system("cls");

	cout << nuevo.imprimir();

	return 0;
}