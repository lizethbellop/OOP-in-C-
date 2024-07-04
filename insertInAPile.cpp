#include <iostream>

using namespace std;

class Nodo{
	public:
		int dato;
		Nodo *siguiente;

		Nodo();
};

class Pila{
	public:
		Nodo *tope;
		int tamanio;

		Pila();
		void insertar(int);
};

Nodo::Nodo(){
	dato = 0;
	siguiente = NULL;
}

Pila::Pila(){
	tope = NULL;
	tamanio = 0;
}

void Pila::insertar(int n){
	Nodo *nuevo = new Nodo();

	nuevo->dato = n;
	nuevo->siguiente = tope;

	tope = nuevo;

	cout << "Nodo " << n << " insertado correctamente\n";

	tamanio++;
}

int main(){
	int opcion;
	Pila a = Pila();

	do{
		system("cls");
		cout << "[1] Insertar\n";
		cout << "[2] Salir\n ";
		cin >> opcion;

		if(opcion == 1){
			int n;
			system("cls");

			cout << " Ingresa un numero\n";
			cin >> n;

			a.insertar(n);

		}
	}while(opcion != 2);

	return 0;
}