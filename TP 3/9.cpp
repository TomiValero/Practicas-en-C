//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
int i, num, maximo;
for (i=1;i<=10; i++) {
    cout<<"INGRESE UN NUMERO: ";
    cin>>num;
    if(i==1) {
    maximo=num;
    }
    if (num>maximo) {
    maximo=num;
    }
}
cout<<"El maximo es: "<<maximo;
cout<<endl;
system("pause");
return 0;
}
