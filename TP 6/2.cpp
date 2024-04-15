//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, num, vect[10], maxi, posicion;
    for(i=0;i<10;i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        vect[i]=num;
        if(i==0){
            maxi=vect[i];
        }
        if(vect[i]>=maxi){
            maxi=vect[i];
            posicion=i;
        }
    }
    cout<<"Posi "<<posicion<<endl<<"Max "<<maxi<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
