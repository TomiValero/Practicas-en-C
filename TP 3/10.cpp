//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
int i, num, maximo=0, posicion=0;
for (i=1;i<=3; i++) {
    cout<<"INGRESE UN NUMERO: ";
    cin>>num;
    if (i==1) {
    maximo=num;
    posicion=i;
    }
    if (num>maximo) {
    maximo=num;
    posicion=i;
    }
}
cout<<"El maximo es: "<<maximo;
cout<<endl;
cout<<"La posicion es: "<< posicion;
cout<<endl;
	system("pause");
	return 0;
}
