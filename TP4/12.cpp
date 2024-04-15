#include <iostream>
using namespace std;
int main() {
    int num;
    int primerimp;
    int ultimoimp;
    bool ind=true;
    cout<<"Ingrese un numero: ";
    cin>>num;
    while(num!=0){
        if(ind==true&&num%2!=0){
            primerimp=num;
            ind=false;
        }
        if(num%2!=0){
        ultimoimp=num;
        }
    cout<<"Ingrese un numero: ";
    cin>>num;
    }
    cout<<"El primer impar es: "<<primerimp;
    cout<<endl;
    cout<<"Y el ultimo impar es: "<<ultimoimp;
cout<<endl;
return 0;
}

