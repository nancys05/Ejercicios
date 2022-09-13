
   #include <iostream>
  
    using namespace std;

int main (void)
{
    float IMC, altura_en_m, peso_en_kg;
    cout << "Ingresa el valor de altura en m: ";
    cin >> altura_en_m;
    cin.get();
    cout << "Ingresa el valor de peso en kg: ";
    cin >> peso_en_kg;
    cin.get();
    IMC=peso_en_kg/altura_en_m/altura_en_m;
  	if(IMC<16)
	  {
		cout << "Su imc es de "<<IMC<< " y corresponde a ingrapeso: delgadez severa."<<endl;
	}
	else if (IMC>=16 && IMC<=16.99){
		cout << "Su imc es de "<<IMC<< " y corresponde a infrapeso: delgadez moderada."<<endl;
	}
	else if (IMC>=17 && IMC<=18.49){
		cout << "Su imc es de "<<IMC<< " y corresponde a infrapeso: delgadez aceptable."<<endl;
	}
	else if (IMC>=18.5 && IMC<=24.99){
		cout << "Su imc es de "<<IMC<< " y corresponde a peso normal."<<endl;
	}
	else if (IMC>=25 && IMC<=29.99){
		cout << "Su imc es de "<<IMC<< " y corresponde a sobrepeso."<<endl;
	}
	else if (IMC>=30 && IMC<=34.99){
		cout << "Su imc es de "<<IMC<< " y corresponde a obeso: tipo I."<<endl;
	}
	else if (IMC>=35 && IMC<=40){
		cout << "Su imc es de "<<IMC<< " y corresponde a obeso: tipo II."<<endl;
	}
	else if (IMC>40){
		cout << "Su imc es de "<<IMC<< " y corresponde a obeso: tipo III."<<endl;
	}
    cout << endl;
}
