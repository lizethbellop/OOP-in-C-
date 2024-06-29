#include <iostream>

using namespace std;

class Animal{
	private:
		string alimentacion;
		string formaComer;
	public:
		Animal(string, string);
		virtual void comer();
};

class Humano: public Animal{
    private:
        string genero;
    public:
        Humano(string, string, string);
        void comer();
};

class Perro: public Animal{
    private:
        string raza;
    public:
        Perro(string, string, string);
        void comer();
};

Animal::Animal(string _alimentacion, string _formaComer){
	alimentacion = _alimentacion;
	formaComer = _formaComer;
}

Humano::Humano(string _alimentacion, string _formaComer, string _genero):Animal(_alimentacion, _formaComer){
	genero = _genero;
}

Perro::Perro(string _alimentacion, string _formaComer, string _raza):Animal(_alimentacion, _formaComer){
	raza = _raza;
}

void Animal::comer(){
	cout << "Hola estoy comiendo soy " << alimentacion << " y como " << formaComer << "\n" ;
}

void Humano::comer(){
	Animal::comer();
	cout << "Soy un humano, soy " << genero << "\n";
}

void Perro::comer(){
	Animal::comer();
	cout << "Soy un perro, soy un " << raza << "\n";
}

int main(){
	Animal *vector[3];

	vector[0] = new Animal("Herbivoro", "de los arboles");
	vector[1] = new Humano("Vegetariano", "con cubiertos", "mujer");
	vector[2] = new Perro("Omnivoro", "directo del plato", "yorkshire");

	vector[0]->comer();
	cout << "\n";
	vector[1]->comer();
	cout << "\n";
	vector[2]->comer();
	cout << "\n";

	return 0;

}