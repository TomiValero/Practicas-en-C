//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
int i, num, ante=0, ult=0, a;

for (i=1;i<=7;i++) {
cout<<"Ingrese un numero: ";
cin>>num;

    if (i==1&num%2!=0) {
        ult=num;
}

    if (num%2!=0) {
        a=ult;
        ante=a;
        ult=num;
}}

cout<<"El anteultimo impar es: "<<ante<<" y el ultimo "<<ult;
	cout<<endl;
	system("pause");
	return 0;
}
