//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, num, vect[20];
    bool ord=true;
    for(i=0;i<20;i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        vect[i]=num;
    }
    for(i=0;i<20;i++){
       if(vect[i]>vect[i+1]){
        ord=false;
       }
    }
    if(ord==true){
        cout<<"Ordenado";
    } else cout<<"No ordenado";
	cout<<endl;
	system("pause");
	return 0;
}
