//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
int i, num, primer=0, ult=0;
for (i=1;i<=7; i++) {
    cout<<"Ingrese un numero: ";
    cin>>num;

    if (i==1&num%2!=0) {
        primer=num;
    }
    if (num!=primer&&num%2!=0) {
        ult=num;
    }}
cout<<"El primer impar es: "<<primer<<" y el ultimo: "<<ult;
	cout<<endl;
	system("pause");
	return 0;
}
