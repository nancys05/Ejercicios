#include <iostream>
using namespace std;
int main(){
     int cont=0,ap=0,de=0,c,nota;
        double promap,promde,sumap=0,sumde=0;
       cout<<"ingresa la cantidad de notas a ingresar"<< endl;
       cin>>c;
       while(cont!=c){
       cout<<"Ingresa nota"<<endl;
       cin>>nota;
       if(nota>=6){
        sumap=sumap+nota;
        ap=ap+1;
       }else{
        sumde=sumde+nota;
        de=de+1;
       }
       cont++;
       }
       promap=sumap/ap;
       promde=sumde/de;
       cout<<"Promedio de Notas aprobadas : "<<
       (promap)<<"  Promedio  de Notas desaprobadas : " <<
      (promde);
    return 0;
}
