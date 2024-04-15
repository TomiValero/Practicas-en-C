//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, num, vect[10], suma=0;
    for(i=0;i<10;i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        vect[i]=num;
    }
    for(i=0;i<10;i++){
        suma+=vect[i];
    }
	cout<<suma<<endl;
	system("pause");
	return 0;
}
