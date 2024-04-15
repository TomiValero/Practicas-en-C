//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, num, vect[5], vect2[5], vect3[10], a=0, p=0;
    cout<<"Vector 1: "<<endl;
    for(i=0;i<5;i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        vect[i]=num;
    }
    cout<<"Vector 2: "<<endl;
     for(i=0;i<5;i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        vect2[i]=num;
    }
    i=0;
    for(p=0;p<10;p++){
        if(p%2==0){
            vect3[p]=vect[i];
            i++;
        } else {
            vect3[p]=vect2[a];
            a++;
            }
    }
    cout<<"Vector 3: "<<endl;
     for(p=0;p<10;p++){
            cout<<vect3[p]<<endl;
        }
	cout<<endl;
	system("pause");
	return 0;
}
