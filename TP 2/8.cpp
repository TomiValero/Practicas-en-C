//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    float n1, n2, n3;
    cout<<"Ingrese un numero: ";
    cin>> n1;
    cout<<"Ingrese un numero: ";
    cin>> n2;
    cout<<"Ingrese un numero: ";
    cin>> n3;
    if (n1!=n2 && n1!=n3 && n2!=n3){
        cout<<"Escaleno";
    } else if (n1==n2 && n2==n3){
        cout<<"Equilatero";
    } else {
    cout<< "Isoceles";
    }
	cout<<endl;
	system("pause");
	return 0;
}
