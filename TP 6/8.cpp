//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int i, num, vect[10], veces=0, num2;
    for(i=0;i<10;i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        vect[i]=num;
    }
    cout<<"Ingrese un numero-: ";
    cin>>num2;
    for(i=0;i<10;i++){
       if(vect[i]==num2){
        veces++;
       }
    }
	cout<<veces<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
