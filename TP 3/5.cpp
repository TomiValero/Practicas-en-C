//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, numl, num2, maximo, minimo;

cout<<"Ingrese un numero: ";

cin>>numl;

cout<<"Ingrese un numero: ";

cin>>num2;

if (numl>num2) {

    maximo=numl;

    minimo=num2;

} else {

    maximo=num2;

    minimo=numl;
}
for(i=minimo;i<=maximo;i++) {

cout<<i;

cout<<endl;

}
	cout<<endl;
	system("pause");
	return 0;
}
