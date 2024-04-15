//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num;
    cout<<"introduzca un numero: ";
    cin>> num;
    if (num>0){
        cout<<"Su numero es positivo";
    }
    else{
        if(num<0){
            cout<<"Su numero es negativo";
        }
        else{
            cout<<"Su numero es 0";
        }
    }
	cout<<endl;
	system("pause");
	return 0;
}
