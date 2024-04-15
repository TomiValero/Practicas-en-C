//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int n1, n2, n3, n4, n5, auxMax, auxMin;
    cout<<"ingrse un numero: ";
    cin>> n1;
    cout<<"ingrse un numero: ";
    cin>> n2;
    cout<<"ingrse un numero: ";
    cin>> n3;
    cout<<"ingrse un numero: ";
    cin>> n4;
    cout<<"ingrse un numero: ";
    cin>> n5;
    if(n1>n2){
        auxMax=n1;
        auxMin=n2;
    } else{
    auxMax=n2;
    auxMin=n1;
    } if (n3>auxMax){
    auxMax=n3;
    } else if (n3<auxMin){
        auxMin=n3;
        }
    if (n4>auxMax){
    auxMax=n4;
    } else if (n4<auxMin){
        auxMin=n4;
        }
    if (n5>auxMax){
    auxMax=n5;
    } else if (n5<auxMin){
        auxMin=n5;
        }
    cout<<"El maximo es: "<<auxMax;
    cout<<endl;
    cout<<"El minimo es: "<<auxMin;
    cout<<endl;
	system("pause");
	return 0;
    }
    /*if (mayor==a && b>c){
        menor=c;
        cout<<"El menor es: "<<menor;
    } else if (mayor==a && c>b){
        menor=b;
        cout<<"El menor es: "<<menor;
    }else if (mayor==b && a>c){
        menor=c;
        cout<<"El menor es: "<<menor;
    } else if (mayor==b && c>a){
        menor=a;
        cout<<"El menor es: "<<menor;
    } else if (mayor==c && b>a){
        menor=a;
        cout<<"El menor es: "<<menor;
    } else if (mayor==a && a>b){
        menor=b;
        cout<<"El menor es: "<<menor;
    }*/

