//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num;
    int primerpar;
    int ultprimo;
    int cont=0, contp=0, pos1, pos2, i;
    bool a=true;
    cout<<"Ingrese un numero: ";
    cin>>num;
    while(num!=0){
        cont++;
        for(i=1;i<=num; i++){
            if(num%i==0){
                contp++;
            }
        }
        if(contp==2){
            ultprimo=num;
            pos2=cont;
        }
        contp=0;
        if(a==true&&num%2==0){
            primerpar=num;
            pos1=cont;
            a=false;
        }
    cout<<"Ingrese un numero: ";
    cin>>num;
    }
    cout<<"El primer par es: "<<primerpar<<" en la posicion "<<pos1;
    cout<<endl;
    cout<<"Y el ultimo primo es: "<<ultprimo<<" en la posicion "<<pos2;
	cout<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
