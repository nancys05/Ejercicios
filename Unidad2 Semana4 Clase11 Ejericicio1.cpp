#include <iostream>
using namespace std;

float calcularperimetro (float);

int main(){
	double lado;
	cout<<"ingrese el lado del cuadrado"<< endl;
	cin >> lado;
	cout<<"El perimetro del cuadrado es "<<calcularperimetro(lado);
	return 0;
	}
	
	float calcularperimetro(float lado){
		double perimetro =lado *4;
		return perimetro;
	}

