//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int i, num, vect[10], aux;
    for(i=0;i<10;i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        vect[i]=num;
    }
    aux=vect[0];
    vect[0]=vect[9];
    vect[9]=aux;
    for(i=0;i<10;i++){
        cout<<vect[i]<<endl;
    }
	cout<<endl;
	system("pause");
	return 0;
}
