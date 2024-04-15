//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int edad, km;
    cout<<"Ingrese su edad: ";
    cin>> edad;
    cout<<"Ingrese la distancia: ";
    cin>> km;
    if ((edad>70 || edad<18)|| km> 500){
        cout<<"No vota";
    } else cout<<"Vota";
	cout<<endl;
	system("pause");
	return 0;
}
