//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int i, num, vect[10], contP=0, p, div=0;
    for(i=0;i<10;i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        vect[i]=num;
    }
    for(i=0;i<10;i++){
            div=0;
        for(p=1;p<=vect[i];p++){
            if(vect[i]%p==0){
                div++;
            }
        }
        if(div==2) {
                contP++;
                cout<<"Prmo "<<vect[i]<<endl;
        }
    }
	cout<<"son: "<<contP<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
