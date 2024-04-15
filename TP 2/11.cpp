//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int n1, n2, n3, n4, n5, cont=0;
    cout<<"Ingrese un numero: ";
    cin>> n1;
    cout<<"Ingrese un numero: ";
    cin>> n2;
    cout<<"Ingrese un numero: ";
    cin>> n3;
    cout<<"Ingrese un numero: ";
    cin>> n4;
    cout<<"Ingrese un numero: ";
    cin>> n5;
    if (n1>0){
        cont++;
    }
    if (n2>0){
        cont++;
    }
    if (n3>0){
        cont++;
    }
    if (n4>0){
        cont++;
    }
    if (n5>0){
        cont++;
    }
    cout<<"Hay "<< cont << " numeros positivos.";
	cout<<endl;
	system("pause");
	return 0;
}
