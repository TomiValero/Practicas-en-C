//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
int i, nl, contp=0, contn=0, contc=0;
for (i=1;i<=20;i++) {
cout<<"Ingrese el numero: ";
cin>>nl;
if (nl>0) {
contp++;
}
if (nl<0) {
    contn++;
}
if (nl==0) {
    contc++;
}
}
cout<<"Los positivos son: "<<contp;
cout<<endl;
cout<<"Los negativos son: "<<contn;
cout<<endl;
cout<<"los ceros son: "<<contc;
cout<<endl;
system("pause");
return 0;
}
