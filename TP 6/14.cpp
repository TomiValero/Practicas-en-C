//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int i, num, vect[5], vect2[5], vect3[5], a, p=0;
     for(p=0;p<5;p++){
       vect3[p]=0;
    }
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
    p=0;
    for(i=0;i<5;i++){
        for(a=0;a<5;a++){
            if(vect[i]==vect2[a]){
                vect3[p]=vect2[a];
                p++;
            }
        }
    }
    cout<<"Vector 3: "<<endl;
     for(p=0;p<5;p++){
        if(vect3[p]!=0){
            cout<<vect3[p]<<endl;
        }
    }
	cout<<endl;
	system("pause");
	return 0;
}
