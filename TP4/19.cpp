//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num, i=0, cont=0;
    bool a=true;
    cout<<"Ingrese un numero: ";
    cin>>num;
    while(i<=num){
        i++;
        if(num%i==0){
            cont++;
        }
    }
    if(cont==2){
    cout<<"Es primo";
	cout<<endl;
    } else {
	cout<<"No es primo";
	cout<<endl;
    }
	system("pause");
	return 0;
}
