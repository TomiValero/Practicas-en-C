//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
int i, nl, cont=0, n;
cout<<"Ingrese la cantidad: ";
    cin>>n;
for (i=1;i<=n;i++) {
    cout<<"Ingrese el numero: ";
    cin>>nl;
    if (nl>0) {
        cont++;
}
}

cout<<"Los positivos son: "<<cont;

cout<<endl;
system("pause");
return 0;
}
