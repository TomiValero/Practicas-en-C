//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, num, vect[11], ruptu=0;
    for(i=0;i<11;i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        vect[i]=num;
    }
    for(i=0;i<10;i++){
        cout<<vect[i]<<endl;
       if(vect[i]>=vect[i+1]){
        ruptu++;
        cout<<".."<<ruptu<<endl;
       }
    }
	cout<<";"<<ruptu<<endl;
	system("pause");
	return 0;
}
