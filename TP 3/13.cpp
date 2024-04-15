//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
int i, num, maximo=0;

for (i=1;i<=10;i++) {
    cout<<"INGRESE UN NUMERO ";
    cin>>num;
    if(i==1&&num%2==0) {
        maximo-num;
    }
    if (num>maximo&&num%2==0) {
    maximo=num;
        }}
cout<<"El maximo par es: "<<maximo;
	cout<<endl;
	system("pause");
	return 0;
}
