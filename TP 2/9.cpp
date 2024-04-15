//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int a, b, c;
    cout<<"Ingrese el numero a: ";
    cin>> a;
    cout<<"Ingrese el numero b: ";
    cin>> b;
    cout<<"Ingrese el numero c: ";
    cin>> c;
    if(a>b && a>c){
        cout<<"El mayor es: "<< a;
    } else if (b>c){
        cout<<"El mayor es: "<< b;
    } else {
    cout<<"El mayor es: "<<c;
    }
	cout<<endl;
	system("pause");
	return 0;
}
