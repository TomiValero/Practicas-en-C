//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num, i, aux;
    bool fin=true;
    for(i=1;i<=8;i++){
    cout<<"Ingrese un numero: ";
    cin>>num;
    if (i==1){aux=num;}
    if (fin==true&&num>=aux){
        aux=num;
    } else {
        fin=false;
    }
    }
    if (fin==true){
        cout<<"Conjunto ordenado";
        cout<<endl;
    } else {
        cout<<"Conjunto no ordenado";
    }
	cout<<endl;
	system("pause");
	return 0;
}
