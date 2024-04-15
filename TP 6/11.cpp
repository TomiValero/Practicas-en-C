//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, num, vect[5], vect2[9], o=0, prom=0;
    for(i=0;i<5;i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        vect[i]=num;
    }
    for(o=0;o<9;o++){
       vect2[o]=0;
    }
    i=0;
   for(o=0;o<9;o++){
        if(o%2==0){
            vect2[o]=vect[i];
            i++;
        }
    }
    i=0;
    for(o=0;o<9;o++){
        if(vect2[o]==0){
            vect2[o]=(vect[i]+vect[i+1])/2;
            i++;
        }
    }
    for(o=0;o<9;o++){
        cout<<vect2[o]<<endl;
    }
	cout<<endl;
	system("pause");
	return 0;
}
