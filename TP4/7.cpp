//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num, maximo=0;
    cout<<"Inresar un numero: ";
    cin>>num;
    maximo=num;
    while(num!=0){
    if(num>maximo){
        maximo=num;
    }
    cout<<"Inresar un numero: ";
    cin>>num;
    }
    cout<<"Maximo: "<<maximo;
	cout<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
