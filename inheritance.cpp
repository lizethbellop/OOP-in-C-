#include <iostream>
#include<string>

using namespace std;

class Alumno{
	private:
		string nombre, matricula;
	public:
		Alumno();
		void insertar(string,string);
		string getNombre();
		string getMatricula();
};

class Lista : public Alumno{
	public: 
		Lista();
		void listar();
};

Alumno::Alumno(){
	
}

Lista::Lista(){
	
}

void Alumno::insertar(string nom, string mat){
	nombre = nom;
	matricula = mat;
}

string Alumno::getNombre(){
	return nombre;
}

string Alumno::getMatricula(){
	return matricula;
}

void Lista::listar(){
	cout << getMatricula() << " " << getNombre() <<"\n";
}

int main(){
	Lista alumno1, alumno2;

	alumno1.insertar("Liz", "S230152");
	alumno2.insertar("Andy", "S270138");
	alumno1.listar();
	alumno2.listar();
	
	/* se podría hacer si fuera con constructor y se voltearan las clases porque si no, no funciona
	Lista *arreglo[2];
	
	arreglo[0] = new Alumno("Liz", "S230152");
	arreglo[1] = new Alumno("Andy", "S270138");
	
	for(int i = 0; i < 2; i++)
	    cout << arreglo[i].listar() << "\n";*/
	
	return 0;
}