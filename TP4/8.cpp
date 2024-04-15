#include <iostream>
using namespace std;
int main() {
int num;
int maxpar=-999999999;
cout<<"Ingrese un numero: ";
cin>>num;
if(num%2==0&&num!=0){
    maxpar=num;
}

while(num!=0){
if(num%2==0&&num>maxpar){
    maxpar=num;
}
cout<<"Ingrese un numero: ";
cin>>num;
}
cout<<"El maximo par es: "<<maxpar;
cout<<endl;
return 0;
}

