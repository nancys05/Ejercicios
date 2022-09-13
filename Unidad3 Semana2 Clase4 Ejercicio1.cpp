#include <iostream>
using namespace std;
int main()
{
	cout<<"Escriba un caracter:: ";
	char caracter;
	cin>> caracter;
	
	switch (caracter){
		case 'a': case 'A':	case 'e':  case 'E': case 'i':  case 'I':
				case 'o': case 'O':	case 'u':  case 'U':
					cout<<caracter<<" Es una vocal"<< endl;
					break;
					case'1': case'2': case'3': case'4': case'5': case'6':
						case'7': case'8': case'9': case'0':
	cout<<caracter<<" Es un digito "<< endl;
	break;
	default:
			cout<<caracter<<"No es vocal ni digito"<< endl;
	}
}
