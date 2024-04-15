//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
int i,num, maximon, minimop;
bool primern=true,primerp=true;
for(i=1;i<=10;i++) {
cout<<"INGRESE UN NUMERO: ";
cin>>num;
if (primern==true&&num<0) {
    maximon=num;
    primern=false;
}
if (num<0&&num>maximon) {
    maximon=num;
} if (primerp==true&num>0) {
    minimop=num;
    primerp=false;
    } if (num>0&&num<minimop) {
    minimop=num;
}}

cout<<"El maximo negativo es: "<<maximon;
cout<<endl;
cout<<"El minimo positivo es: "<<minimop;
	cout<<endl;
	system("pause");
	return 0;
}
