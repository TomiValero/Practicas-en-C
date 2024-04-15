//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int n1, n2, n3;
    cout<<"Ingrese un numero: ";
    cin>> n1;
    cout<<"Ingrese un numero: ";
    cin>> n2;
    cout<<"Ingrese un numero: ";
    cin>> n3;
    if (n1!=n2 && n1!=n3 && n2!=n3){
        cout<<"Son todos distinitos";
    }
	cout<<endl;
	system("pause");
	return 0;
}
