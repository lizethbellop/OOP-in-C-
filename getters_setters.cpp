#include <iostream>

using namespace std;

class Punto{
	private:
		int x, y;
	public:
		Punto();
		void setPunto(int, int);
		int getPuntoX();
		int getPuntoY();
};

Punto::Punto(){	
}

void Punto::setPunto(int _x, int _y){
	x = _x;
	y = _y;
}

int Punto::getPuntoX(){
	return x;
}

 int Punto::getPuntoY(){
 	return y;
 }

 int main(){
 	Punto punto1;

 	punto1.setPunto(21,28);

 	cout << punto1.getPuntoX() << "\n";
 	cout << punto1.getPuntoY() << "\n";

 	return 0;
 }