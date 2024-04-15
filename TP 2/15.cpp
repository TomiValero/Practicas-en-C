//Ejercicio:
//Autor:
//Fecha:
//Comentario:

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int ndi, nme, nan, adi, ame, aan, edad;
    cout<<"Ingrese el dia de nacimineto: ";
    cin>>ndi;
    cout<<"Ingrese el mes de nacimineto: ";
    cin>>nme;
    cout<<"Ingrese el año de nacimineto: ";
    cin>>nan;
    cout<<"Ingrese el dia actual: ";
    cin>>adi;
    cout<<"Ingrese el mes actual: ";
    cin>>ame;
    cout<<"Ingrese el año actual: ";
    cin>>aan;
    edad= aan-nan;
    if (ame < nme || (ame == nme && adi < ndi)) {
        edad--;
    }
    cout << "La edad es: " << edad << endl;
    cout<<edad;
cout<<endl;
system("pause");
return 0;
}
