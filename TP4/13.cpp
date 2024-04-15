#include <iostream>
using namespace std;
int main() {
int num;
    int anteimp;
    int ultimoimp;
    int a;
    cout<<"Ingrese un numero: ";
    cin>>num;
    if(num%2!=0){
        ultimoimp=num;
    }
    while(num!=0){
        if(num%2!=0){
            anteimp=ultimoimp;
            ultimoimp=num;
        }
    cout<<"Ingrese un numero: ";
    cin>>num;
    }
    cout<<"El anteultimo impar es: "<<anteimp;
    cout<<endl;
    cout<<"Y el ultimo impar es: "<<ultimoimp;
cout<<endl;
return 0;
}

