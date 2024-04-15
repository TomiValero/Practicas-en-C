//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int n1, n2, n3, maxi=0, mini=0, mid=0;
    cout<<"Ingrese un numero: ";
    cin>> n1;
    cout<<"Ingrese un numero: ";
    cin>> n2;
    cout<<"Ingrese un numero: ";
    cin>> n3;
    if ((n1>n2 && n1<n3)||(n1<n2 && n1>n3)){
       mid=n1;
       if (n2>n3){
        maxi=n2;
        mini=n3;
       } else {
        maxi=n3;
        mini=n2;
       }
    }
    if ((n2>n1 && n2<n3)||(n2<n1 && n2>n3)){
        mid=n2;
        if (n1>n3){
        maxi=n1;
        mini=n3;
       } else {
        maxi=n3;
        mini=n1;
       }
    }
    if ((n3>n2 && n3<n1)||(n3<n2 && n3>n1)){
        mid=n3;
        if (n2>n1){
        maxi=n2;
        mini=n1;
       } else {
        maxi=n1;
        mini=n2;
       }
    }
    cout<<"El menor es "<<mini;
    cout<<endl;
    cout<<"El medio es "<<mid;
    cout<<endl;
    cout<<"El mayor es "<<maxi;
    cout<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
