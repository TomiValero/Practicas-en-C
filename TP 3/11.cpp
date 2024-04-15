//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, num, maximo, minimo;
for (i=1;i<=10;i++) {
    cout<<"INGRESE UN NUMERO: ";
    cin>>num;
    if (i==1) {
        maximo=num;
        minimo=num;
    }
    if (num>maximo) {
        maximo=num;
    }
    if (num<minimo) {
        minimo=num;
    }
}
cout<<"El maximo es: "<<maximo;
cout<<endl;
cout<<"El minimo es: "<<minimo;
cout<<endl;
system("pause");
return 0;
}
