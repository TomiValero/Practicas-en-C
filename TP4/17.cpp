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
    int num2;
    bool a=true;
    cout<<"Ingrese un numero: ";
    cin>>num;
    mayor=num;
    while(a==true){
        if(num>mayor){
            mayor=num;
        }
        num2=num;
    cout<<"Ingrese un numero: ";
    cin>>num;
        if(num==num2){
            a=false;
        }
    }
    cout<<"El mayor es: "<<mayor;
    cout<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
