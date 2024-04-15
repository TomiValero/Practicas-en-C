//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int i, num, vect[10], posicion=0, num2;
      bool band=true;
    for(i=0;i<10;i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        vect[i]=num;
    }
    cout<<"Ingrese un numero-: ";
    cin>>num2;
    for(i=0;i<10;i++){
       if(band==true&&vect[i]==num2){
        posicion=i+1;
        band=false;
       } else if (band==true) posicion=-1;
    }
	cout<<posicion<<endl;
	system("pause");
	return 0;
}
