//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num;
    int mayor;
    int sigue;
    int a;
    cout<<"Ingrese un numero: ";
    cin>>num;
    mayor=num;
    while(num!=0){
        if(num>=mayor){
            sigue=mayor;
            mayor=num;
        }
    cout<<"Ingrese un numero: ";
    cin>>num;
    }
    cout<<"El mayor es: "<<mayor;
    cout<<endl;
    cout<<"Y el que le sigue es: "<<sigue;
    	cout<<endl;
	system("pause");
	return 0;
}
