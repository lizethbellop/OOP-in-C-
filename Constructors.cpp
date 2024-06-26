#include <iostream>

using namespace std;

class Fecha{
	private:
		int dia, mes, anio;
	public:
		Fecha(int, int, int);
		Fecha(long);
		void mostrarFecha();
};

class Tiempo{
	private:
		int horas, minutos, segundos;
	public:
		Tiempo(int, int, int);
		Tiempo(long);
		void mostrarHora();
};

Fecha::Fecha(int di, int me, int an){
	anio = an;
	mes = me;
	dia = di;
}

Fecha::Fecha(long fechaComp){
	anio = int(fechaComp/10000);
	mes = int((fechaComp - anio*10000)/100);
	dia = int(fechaComp - anio*10000 - mes*100);
}

void Fecha::mostrarFecha(){

	cout << "La fecha es: " << dia << "/" << mes << "/" << anio << "\n";

}

Tiempo::Tiempo(int h, int m, int s){
	this->horas = h;
	this->minutos = m;
	this->segundos = s;
}

Tiempo::Tiempo(long horario){
	horas = int(horario / 10000);
	minutos = int((horario - horas*10000) / 100);
	segundos = int(horario - horas * 10000 - minutos * 100);
}

void Tiempo::mostrarHora(){
	
	cout << "La hora es\n";
	
	if(segundos < 10 && minutos < 10)
	    cout << horas << ":0" << minutos << ":0" << segundos << "\n";
	else
	    if(segundos < 10)
	        cout << horas << ":" << minutos << ":0" << segundos << "\n";
	    else
	        if(minutos < 10)
	            cout << horas << ":0" << minutos << ":" << segundos << "\n";
	        else
	            cout << horas << ":" << minutos << ":" << segundos << "\n";

}

int main(){
	long horario;
	int hr, min, sec;


	Fecha hoy(25, 6, 2024);
	Fecha ayer(20240624);
	
	hoy.mostrarFecha();
	ayer.mostrarFecha();

	cout << "Introduce la hora (formato 24 horas, sin puntos ni espacios)\n";
	cin >> horario;

	if(horario < 25){
		hr = int(horario);

		cout << "Introduce los minutos\n";
		cin >> min;

		cout << "Introduce los segundos\n";
		cin >> sec;

		Tiempo reloj(hr, min, sec);
		
		reloj.mostrarHora();
	}
	else{
		Tiempo reloj(horario);
		reloj.mostrarHora();
	}


	return 0;
}