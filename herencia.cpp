#include <iostream>

using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
	public:
		Persona(string, int);
		void mostrarPersona();
};

class Empleado: public Persona{
	private:
		double salario;
		int aniosTrabajando;
		string tipoTrabajo;
	public:
		Empleado(string, int, double, int, string);
		void mostrarEmpleado();
};

class Estudiante: public Persona{
    private:
        string matricula;
        float promedio;
        string etapa;
    public:
        Estudiante(string, int, string, float, string);
        void mostrarEstudiante();
};

class Universitario: public Estudiante{
	private:
		string carrera;
		short semestre;
		short anioTermino;
	public:
		Universitario(string, int, string, float, string, string, short, short);
		void mostrarUniversitario();
};

Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

Empleado::Empleado(string _nombre, int _edad, double _salario, int _aniosT, string _tipoT):Persona(_nombre, _edad){
	salario = _salario;
	aniosTrabajando = _aniosT;
	tipoTrabajo = _tipoT;
}

Estudiante::Estudiante(string _nombre, int _edad, string _matricula, float _promedio, string _etapa):Persona(_nombre, _edad){
	matricula = _matricula;
	promedio = _promedio;
	etapa = _etapa;
}

//ya no es necesario poner a persona porque viene implicita en estudiante
Universitario::Universitario(string _nombre, int _edad, string _matricula, float _promedio,string _etapa, string _carrera, short _semestre, short _anioTerm):Estudiante(_nombre, _edad, _matricula, _promedio, _etapa){
	carrera = _carrera;
	semestre = _semestre;
	anioTermino = _anioTerm;
}

void Persona::mostrarPersona(){
	cout << "Nombre : " << nombre << "\n";
	cout << "Edad: " << edad << "\n";
}

void Empleado::mostrarEmpleado(){
	mostrarPersona();
	cout << "Salario: " << salario << "\n";
	cout << "Anios Trabajando: " << aniosTrabajando << "\n";
	cout << "Tipo de trabajo: " << tipoTrabajo << "\n";
}

void Estudiante::mostrarEstudiante(){
	mostrarPersona();
	cout << "Matricula: " << matricula << "\n";
	cout << "Promedio: " << promedio << "\n";
	cout << "Etapa: " << etapa << "\n";
}

void Universitario::mostrarUniversitario(){
	mostrarEstudiante();
	cout << "Carrera: " << carrera << "\n";
	cout << "Semestre: " << semestre << "\n";
	cout << "Anio de termino: " << anioTermino << "\n";
}


int main(){
	Estudiante estudiante1("Andy", 24, "AB2702SH", 10, "Maestria");
	Persona persona1("Taylor Swift", 34);
	Empleado empleado1("Juan Pablo", 29, 100.765, 10, "Musico");
	Universitario uni1("Liz", 18, "S237014074", 8.9, "Universidad", "Ingenieria de software", 3, 2027);

	estudiante1.mostrarEstudiante();
	cout << "\n";
	persona1.mostrarPersona();
	cout << "\n";
	empleado1.mostrarEmpleado();
	cout << "\n";
	uni1.mostrarUniversitario();
	cout << "\n";
	
	
	/*si se puede hacer esto porque la clase alumno, hereda todo lo publico de la clase persona*/
	estudiante1.mostrarPersona();
	
	/*esto no se puede hacer porque no hay ningun metodo dentro de persona que se llame mostrarAlumno() y porque Persona es la clase padre, no es una clase hija
	persona1.mostrarEstudiante();*/

	return 0;
	
}