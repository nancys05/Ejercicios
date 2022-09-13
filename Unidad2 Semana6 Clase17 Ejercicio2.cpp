#include <iostream>
 
using namespace std;
 
void tablaMultiplicar(int n)
{
    for (int i = 0; i <= 10; i++)
        cout << n << " x " << i << " = " << i * n << endl;
}
 
int main()
{
    int n;
 
    cout << "Ingrese el numero entero "; cin >> n;
 
    cout << endl;
    tablaMultiplicar(n);
    cout << endl;
 
    return 0;
}
