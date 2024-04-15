#include <iostream>
using namespace std;
int main() {
int num;
int maximo;
int posicion=0;
int cont=1;
cout<<"Ingrese un numero: ";
cin>>num;
maximo=num;
while(num!=0){
if(num>maximo){
    maximo=num;
    posicion=cont;
}
cont++;
cout<<"Ingrese un numero: ";
cin>>num;
}
cout<<"El maximo es: "<<maximo;
cout<<endl;
cout<<"Y su posicion es: "<<posicion;
cout<<endl;
return 0;
}

