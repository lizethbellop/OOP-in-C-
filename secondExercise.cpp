#include <iostream>
#include <stdlib.h>

using namespace std;

class Rectangulo{
    private:
        int largo;
        int ancho;
    public:
        Rectangulo(int, int);
        int perimetro();
        int area();
};

Rectangulo::Rectangulo(int base, int altura){
    largo = base;
    ancho = altura;
}

int Rectangulo::perimetro(){
    
    int per;
    
    per = (2*largo) + (2*ancho);
    
    return per;
}

int Rectangulo::area(){
   int ar;
   
    ar = largo * ancho;
    
    return ar;
}

int main(){
    int b, h;
    cout << "Introduce la medida de la base\n";
    cin >> b;
    
    cout << "Introduce la medida de la altura\n";
    cin >> h;
    
    Rectangulo r1(b,h);
    
    cout << "El perimetro del rectangulo es: " << r1.perimetro() << "\n";
    cout << "El area del rectangulo es: " << r1.area() << "\n";
    
    return 0;
    
}