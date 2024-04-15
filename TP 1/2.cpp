//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int a, b, c;
    cout<< "Ingrese un numero a: ";
    cin>> a;
    cout<< "Ingrese un numero b: ";
    cin>> b;
    c=a;
    a=b;
    b=c;
    cout<< "Ahora este es a: "<< a;
	cout<<endl;
	cout<< "Ahora este es b: "<< b;
	cout<<endl;
	system("pause");
	return 0;
}
