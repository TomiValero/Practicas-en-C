//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
int i, num, primer=0, secu=0, a, b;
for (i=1;i<=2;) {
cout<<"Ingrese un numero: ";
cin>>num;
    if (i==1&num%2!=0) {
        primer=num;
        i++;
}

    if (num!=primer&&num%2!=0) {
        secu=num;
        i++;
    }}
for (b=1;b<=(7-i);b++) {
cout<<"Ingrese un numero: ";
cin>>a;
}
cout<<"Los primeros dos impares son: "<<primer<<" y "<<secu;
	cout<<endl;
	system("pause");
	return 0;
}
