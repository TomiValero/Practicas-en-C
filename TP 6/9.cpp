//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
      int i, num, vect[10], contP=0, num2;
    for(i=0;i<10;i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        vect[i]=num;
    }
    for(i=0;i<10;i++){
        if(vect[i]%2==0){
            contP++;
            cout<<"Par "<<vect[i]<<endl;
        }
    }
	cout<<"son: "<<contP<<endl;
	system("pause");
	return 0;
}
