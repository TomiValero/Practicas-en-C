#include <iostream>
using namespace std;
int main() {
int num;
    int maximoneg=-9999999;
    int minimopos;
    cout<<"Ingrese un numero: ";
    cin>>num;
    if(num!=0&&num<0){
        maximoneg=num;
    }
    if(num!=0&&num>0){
       minimopos=num;
    }
    while(num!=0){
        if(num<0&&num>maximoneg){
            maximoneg=num;
        }
        if(num>0&&num<minimopos){
            minimopos=num;
        }
    cout<<"Ingrese un numero: ";
    cin>>num;
    }
    cout<<"El maximo negativo es: "<<maximoneg;
    cout<<endl;
    cout<<"Y el minimo positivo es: "<<minimopos;
    cout<<endl;
return 0;
}

