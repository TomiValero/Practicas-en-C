//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
int i, numero, tercer, segundo, primero;

for (i=1;i<=3;i++) {
cout<<"Ingrese un numeroero: ";
cin>>numero;
    if (i==1){
        tercer=numero;
    }
    if(i==2&numero>tercer){
       segundo=tercer;
       tercer=numero;
    } else if (i==2&numero<tercer) {
        segundo=numero;
    } if (i==3&numero>tercer){
        primero=segundo;
        segundo=tercer;
        tercer=numero;
    } else if (i==3&numero>segundo){
        primero=segundo;
        segundo=numero;
    } else {
        primero=numero;
    }
}
cout<<"El tercer es: "<<tercer<<endl<<"El segundo es: "<<segundo<<endl<<"El primero es: "<<primero;
	cout<<endl;
	system("pause");
	return 0;
}
