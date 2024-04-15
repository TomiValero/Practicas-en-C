#include <iostream>
using namespace std;
int main() {
    int num;
    int maximo;
    int minimo;
    cout<<"Ingrese un numero: ";
    cin>>num;
    maximo=num;
    minimo=num;
    while(num!=0){
        if(num>maximo){
            maximo=num;
        }
        if(num<minimo){
            minimo=num;
        }
    cout<<"Ingrese un numero: ";
    cin>>num;
    }
    cout<<"El maximo es: "<<maximo;
    cout<<endl;
    cout<<"Y el minimo es: "<<minimo;
    cout<<endl;
return 0;
}

