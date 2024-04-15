//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
      int i, num, vect[10];
      bool band=true;
    for(i=0;i<10;i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        vect[i]=num;
    }
    for(i=0;i<9;i++){
       if(vect[i]==vect[i+1]){
        band=false;
       }
    }
    if(band==false){
        cout<<"Hay Repetidos"<<endl;
    }
	cout<<endl;
	system("pause");
	return 0;
}
