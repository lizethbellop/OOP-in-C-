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
		void imprimir();
		bool buscar(int);
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

void Pila::imprimir(){
	Nodo *aux = tope;

	while(aux != NULL){
		cout << aux->dato << " ";
		aux = aux->siguiente;
	}
}

bool Pila::buscar(int elemento){
	bool band = false;

	Nodo *aux = tope;

	while(!band && aux != NULL){
		if(aux->dato == elemento)
			band = true;
		else
			aux = aux->siguiente;
	}

	return band;
}

int main(){
	int opcion;
	Pila a = Pila();

	do{
		system("cls");
		cout << "[1] Insertar\n";
		cout << "[2] Imprimir\n";
		cout << "[3] Buscar\n";
		cout << "[4] Salir\n ";
		cin >> opcion;

		if(opcion == 1){
			int n;
			system("cls");

			cout << " Ingresa un numero\n";
			cin >> n;

			a.insertar(n);

		}
		else{
			if(opcion == 2){
				system("cls");
				cout << "Pila:\n";
				a.imprimir();
				cout << "\n";
				system("pause");	
			}
			else{
				if(opcion == 3){
					int num;
					bool busqueda;

					cout << "Introduce el valor a buscar\n";
					cin >> num;

					busqueda = a.buscar(num);

					if(busqueda)
						cout << "El valor esta en la pila\n";
					else
						cout << "El valor no esta en la pila\n";
				}
				else{
					cout << "Introduce una opcion correcta\n";
				}
			}
		}
	}while(opcion != 4);

	return 0;
}